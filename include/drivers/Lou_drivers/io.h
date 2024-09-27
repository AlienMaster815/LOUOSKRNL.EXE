


#define IORESOURCE_BITS		0x000000ff	/* Bus-specific bits */

#define IORESOURCE_TYPE_BITS	0x00001f00	/* Resource type */
#define IORESOURCE_IO		0x00000100	/* PCI/ISA I/O ports */
#define IORESOURCE_MEM		0x00000200
#define IORESOURCE_REG		0x00000300	/* Register offsets */
#define IORESOURCE_IRQ		0x00000400
#define IORESOURCE_DMA		0x00000800
#define IORESOURCE_BUS		0x00001000

#define IORESOURCE_PREFETCH	0x00002000	/* No side effects */
#define IORESOURCE_READONLY	0x00004000
#define IORESOURCE_CACHEABLE	0x00008000
#define IORESOURCE_RANGELENGTH	0x00010000
#define IORESOURCE_SHADOWABLE	0x00020000

#define IORESOURCE_SIZEALIGN	0x00040000	/* size indicates alignment */
#define IORESOURCE_STARTALIGN	0x00080000	/* start field is alignment */

#define IORESOURCE_MEM_64	0x00100000
#define IORESOURCE_WINDOW	0x00200000	/* forwarded by bridge */
#define IORESOURCE_MUXED	0x00400000	/* Resource is software muxed */

#define IORESOURCE_EXT_TYPE_BITS 0x01000000	/* Resource extended types */
#define IORESOURCE_SYSRAM	0x01000000	/* System RAM (modifier) */

/* IORESOURCE_SYSRAM specific bits. */
#define IORESOURCE_SYSRAM_DRIVER_MANAGED	0x02000000 /* Always detected via a driver. */
#define IORESOURCE_SYSRAM_MERGEABLE		0x04000000 /* Resource can be merged. */

#define IORESOURCE_EXCLUSIVE	0x08000000	/* Userland may not map this resource */

#define IORESOURCE_DISABLED	0x10000000
#define IORESOURCE_UNSET	0x20000000	/* No address assigned yet */
#define IORESOURCE_AUTO		0x40000000
#define IORESOURCE_BUSY		0x80000000	/* Driver has marked this resource busy */

/* I/O resource extended types */
#define IORESOURCE_SYSTEM_RAM		(IORESOURCE_MEM|IORESOURCE_SYSRAM)

/* PnP IRQ specific bits (IORESOURCE_BITS) */
#define IORESOURCE_IRQ_HIGHEDGE		(1<<0)
#define IORESOURCE_IRQ_LOWEDGE		(1<<1)
#define IORESOURCE_IRQ_HIGHLEVEL	(1<<2)
#define IORESOURCE_IRQ_LOWLEVEL		(1<<3)
#define IORESOURCE_IRQ_SHAREABLE	(1<<4)
#define IORESOURCE_IRQ_OPTIONAL		(1<<5)
#define IORESOURCE_IRQ_WAKECAPABLE	(1<<6)

/* PnP DMA specific bits (IORESOURCE_BITS) */
#define IORESOURCE_DMA_TYPE_MASK	(3<<0)
#define IORESOURCE_DMA_8BIT		(0<<0)
#define IORESOURCE_DMA_8AND16BIT	(1<<0)
#define IORESOURCE_DMA_16BIT		(2<<0)

#define IORESOURCE_DMA_MASTER		(1<<2)
#define IORESOURCE_DMA_BYTE		(1<<3)
#define IORESOURCE_DMA_WORD		(1<<4)

#define IORESOURCE_DMA_SPEED_MASK	(3<<6)
#define IORESOURCE_DMA_COMPATIBLE	(0<<6)
#define IORESOURCE_DMA_TYPEA		(1<<6)
#define IORESOURCE_DMA_TYPEB		(2<<6)
#define IORESOURCE_DMA_TYPEF		(3<<6)

/* PnP memory I/O specific bits (IORESOURCE_BITS) */
#define IORESOURCE_MEM_WRITEABLE	(1<<0)	/* dup: IORESOURCE_READONLY */
#define IORESOURCE_MEM_CACHEABLE	(1<<1)	/* dup: IORESOURCE_CACHEABLE */
#define IORESOURCE_MEM_RANGELENGTH	(1<<2)	/* dup: IORESOURCE_RANGELENGTH */
#define IORESOURCE_MEM_TYPE_MASK	(3<<3)
#define IORESOURCE_MEM_8BIT		(0<<3)
#define IORESOURCE_MEM_16BIT		(1<<3)
#define IORESOURCE_MEM_8AND16BIT	(2<<3)
#define IORESOURCE_MEM_32BIT		(3<<3)
#define IORESOURCE_MEM_SHADOWABLE	(1<<5)	/* dup: IORESOURCE_SHADOWABLE */
#define IORESOURCE_MEM_EXPANSIONROM	(1<<6)
#define IORESOURCE_MEM_NONPOSTED	(1<<7)

/* PnP I/O specific bits (IORESOURCE_BITS) */
#define IORESOURCE_IO_16BIT_ADDR	(1<<0)
#define IORESOURCE_IO_FIXED		(1<<1)
#define IORESOURCE_IO_SPARSE		(1<<2)

/* PCI ROM control bits (IORESOURCE_BITS) */
#define IORESOURCE_ROM_ENABLE		(1<<0)	/* ROM is enabled, same as PCI_ROM_ADDRESS_ENABLE */
#define IORESOURCE_ROM_SHADOW		(1<<1)	/* Use RAM image, not ROM BAR */

/* PCI control bits.  Shares IORESOURCE_BITS with above PCI ROM.  */
#define IORESOURCE_PCI_FIXED		(1<<4)	/* Do not move resource */
#define IORESOURCE_PCI_EA_BEI		(1<<5)	/* BAR Equivalent Indicator */


#ifdef __x86_64__

#include <cstdlib.h>
#include <cstdint.h>

#endif

#ifdef __i386__

#include <cstdlib.h>
#include <stdint.h>

#endif

#ifndef _IO_H
#define _IO_H

#ifndef _KERNEL_MODULE_

#ifdef __cplusplus
class Port{
    protected:
        Port(uint16_t port_number);
        ~Port();
        uint16_t port_number;
};

class Port8Bit : public Port{
    public:
    Port8Bit(uint16_t port_number);
    ~Port8Bit();

    virtual uint8_t Read();
    virtual void Write(uint8_t data);

    protected:
        uint8_t KeCallBuiltInInb(uint16_t port);
        void KeCallBuiltInOutb(uint16_t port,uint8_t data);
};

class Port8BitSlow : public Port{
    public:

    Port8BitSlow(uint16_t port_number);
    ~Port8BitSlow();

    virtual void Write(uint8_t data);

    protected:
    void KeCallBuiltInOutbSlow(uint16_t port,uint8_t data);
};

class Port16Bit : public Port{
    public:

    Port16Bit(uint16_t port_number);
    ~Port16Bit();

    virtual uint16_t Read();
    virtual void Write(uint16_t data);

    protected:
        uint16_t KeCallBuiltInInw(uint16_t port);
        void KeCallBuiltInOutw(uint16_t port,uint16_t data);
};

class Port32Bit : public Port{
    public:


    Port32Bit(uint16_t port_number);
    ~Port32Bit();

    virtual uint32_t Read();
    virtual void Write(uint32_t data);

    protected:
        uint32_t KeCallBuiltInInl(uint16_t port);
        void KeCallBuiltInOutl(uint16_t port,uint32_t data);
};

extern "C" void insw(uint16_t __port, void *__buf, unsigned long __n);
 
extern "C" void outsw(uint16_t __port, const void *__buf, unsigned long __n);
#endif
#else


KERNEL_EXPORT insw(uint16_t __port, void *__buf, unsigned long __n);
KERNEL_EXPORT outsw(uint16_t __port, const void *__buf, unsigned long __n);

#endif
#endif
