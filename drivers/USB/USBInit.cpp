#include <LouDDK.h>


typedef enum{
	UHCI = 0,
	OHCI = 1,
	EHCI = 2,
	XHCI = 3
}USB_HARDWARE_TYPE;

void
USB_INIT(
uint8_t bus, 
uint8_t slot, 
uint8_t function
);

void 
InitializeUHCIController(
P_PCI_DEVICE_OBJECT PDEV
);

void 
InitializeOHCIController(
P_PCI_DEVICE_OBJECT PDEV
);

uint8_t 
LouKePciReadProgIf(
P_PCI_DEVICE_OBJECT PDEV
);

void 
InitializeEHCIController(
P_PCI_DEVICE_OBJECT PDEV
);

void 
InitializeXHCIController(
P_PCI_DEVICE_OBJECT PDEV
);

bool isUsb(uint8_t bus, uint8_t slot, uint8_t function) {

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, function);

	switch (vendorID) {
	case APPLE_ID_1:
	case APPLE_ID_2:

		switch (deviceID) {

		case KeyLargo_USB:
		case KeyLargo_Pangea_USB:
		case KeyLargo_Intrepid_USB:
		case K2_KeyLargo_USB:
		case Apple_Silicon_USB4_Thunderbolt_PCI_Express_Root_Port:
		case USB_Keyboard_Alps_or_Logitech_M2452:
		case USBMouseMitsumiM4848:
		case OpticalUSBMouseFujitsu:
		case XHCIRootHubUSB20Simulation:
		case BluetoothUSBHostController_1:
		case BluetoothUSBHostController:
			LouPrint("Apple USB Host Found\n");
			USB_INIT(bus, slot, function);
			return true;
			break;
		}
		break;

	case AdvancedMicroDevices_1:
	case AdvancedMicroDevices_2:
		switch (deviceID) {


		case FCHUSBEHCIController_1:
		case FCHUSBXHCIController_1:
		//case M4A89GTDPROUSB3Motherboard:
		//case GA880GMAUSB3:
		//case GA880GMAUSB3_eu3:
		case EHCIUSBController:
		case OHCIUSBController1:
		case OHCIUSBController2:
		case SB300USBControllerEHCI_3:
		case SB300USBControllerEHCI_2:
		case SB300USBControllerEHCI_1:
		case IXPSB4x0USB2HostController:
		case IXPSB4x0USBHostController:
		case IXPSB4x0USBHostController_1:
		case SB600USBControllerEHCI:
		case SB600USBOHCI1:
		case SB600USBOHCI2:
		case SB600USBOHCI0:
		case SB600USBOHCI3:
		case SB600USBOHCI4:
		case SB7x0SB8x0SB9x0USBEHCIController:
		case SB7x0SB8x0SB9x0USBOHCI0Controller:
		case SB7x0USBOHCI1Controller:
		case SB7x0SB8x0SB9x0USBOHCI2Controller:
		case Xilleon220USBforHDTV2:
		case Xilleon215USBforX215:
		case Xilleon225USBforX225:
		case Xilleon210USBforX210:
		case Xilleon226USBforX226:
		case Xilleon240SUSBforX240S:
		case Xilleon240HUSBforX240H:
		case Xilleon250USB11forX250:
		case Xilleon260USB11forX260:
		case Xilleon234235USB11forX234X235:
		case Xilleon244245USB11forX244X245:
		case Xilleon242USB11forX242:
		case Xilleon254USB11forX254:
		case Xilleon255USB11forX255:
		case Xilleon243USB11forX243:
		case Xilleon233USB11forX233:
		case Navi10USB:
		case Navi21USB:
		case Navi22USB:
		case Navi23USB:
		case Navi31USB:
		case Theater506USB_2:
		case Theater506USB_1:
		case Theater506ExternalUSB_2:
		case Theater506ExternalUSB_1:
		case Theater506AUSB_2:
		case Theater506AUSB_1:
		case Theater506AExternalUSB_2:
		case Theater506AExternalUSB_1:
		case ArielInternalPCIeGPPBridge0toBusB:
		case ArielUSB31TypeCGen2x1portDPAltMode:
		case ArielUSB31TypeAGen2x2ports:
		case Family17hModels00h0fhUSB30HostController:
		case USB30Hostcontroller:
		case StarshipUSB30HostController:
		case MatisseUSB30HostController:
		case Family19hUSB4ThunderboltPCIetunnel_2:
		case Family19hUSB4ThunderboltPCIetunnel_1:
		case PhoenixUSB4ThunderboltNHIcontroller1:
		case PhoenixUSB4ThunderboltNHIcontroller2:
		case FireFlightUSB31_2:
		case FireFlightUSB31_1:
		case RembrandtUSB4XHCIcontroller5:
		case RembrandtUSB4XHCIcontroller6:
		case RavenUSB31_2:
		case RavenUSB31_1:
		case Raven2USB31:
		case RembrandtUSB4XHCIcontroller1:
		case RembrandtUSB4XHCIcontroller2:
		case RembrandtUSB4XHCIcontroller7:
		case RembrandtUSB4XHCIcontroller3:
		case RembrandtUSB4XHCIcontroller4:
		case RembrandtUSB4XHCIcontroller8:
		case VanGoghUSB2:
		case RembrandtUSB4ThunderboltNHIcontroller1:
		case RembrandtUSB4ThunderboltNHIcontroller2:
		case RenoirUSB31:
		case VanGoghUSB0:
		case VanGoghUSB1:
		case VanGoghSecUSB:
		case PinkSardineUSB4ThunderboltNHIcontroller1:
		case PinkSardineUSB4ThunderboltNHIcontroller2:
		//case ASM1042AUSB30HostController:
		case X370SeriesChipsetUSB31xHCIController:
		case X399SeriesChipsetUSB31xHCIController:
		case A300SeriesChipsetUSB31xHCIController:
		case A400SeriesChipsetUSB31XHCIController:
		case A500SeriesChipsetUSB31XHCIController:
		case A600SeriesChipsetUSB32Controller:
		case AMD755CobraUSB:
		case AMD756ViperUSB:
		case AMD766ViperPlusUSB:
		case AMD768OpusUSB:
		case AMD8111USB:
		case AMD8111USBEHCI:
		case AMD8111USBOHCI:
		case FCHUSBOHCIController_3:
		case FCHUSBEHCIController_3:
		case FCHUSBOHCIController_4:
		case FCHUSBXHCIController_3:
		case FCHUSBXHCIController_2:
		//case FCHUSBEHCIController_1:
		//case FCHUSBXHCIController_1:

			LouPrint("AMD USB Host Found\n");
			USB_INIT(bus, slot, function);
			return true;
			break;

		default:
			break;
		}
		break;

	case INTEL_PCI:
		switch (deviceID) {

		case INTEL_THUNDERBOLT_4_USB_CONTROLLER_MAPLE_RIDGE_4C_2020:
		case INTEL_MERRIFIELD_USB_DEVICE_CONTROLLER_OTG:
		//case INTEL_POWEREDGE_M710_USB_UHCI_CONTROLLER:
		//case INTEL_POWEREDGE_R900_ONBOARD_USB:
		case INTEL_ATOM_PROCESSOR_Z36XXX_Z37XXX_SERIES_OTG_USB_DEVICE_0f37:
		case INTEL_ATOM_PROCESSOR_Z36XXX_Z37XXX_CELERON_N2000_SERIES_USB_XHCI_0f35:
		case INTEL_ATOM_PROCESSOR_Z36XXX_Z37XXX_SERIES_USB_EHCI_0f34:
		case INTEL_THUNDERBOLT_4_USB_CONTROLLER_GOSHEN_RIDGE_2020_0b27:
		case INTEL_QUARK_SOC_X1000_USB_OHCI_HOST_CONTROLLER_093a:
		case INTEL_QUARK_SOC_X1000_USB_EHCI_HOST_CONTROLLER_USB_2_0_DEVICE_0939:
		case INTEL_MEDFIELD_USB_DEVICE_CONTROLLER_OTG:
		case INTEL_MOORESTOWN_USB_CTRL:
		case INTEL_COMET_LAKE_USB_3_1_xHCI_HOST_CONTROLLER_2:
		case INTEL_COMET_LAKE_PCH_LP_USB_3_1_xHCI_HOST_CONTROLLER:
		//case INTEL_MERRIFIELD_USB_DEVICE_CONTROLLER_OTG:
		case INTEL_CORP_8086_DSL6340_USB_3_1_CONTROLLER_ALPINE_RIDGE:
		case INTEL_CORP_8086_DSL6540_USB_3_1_CONTROLLER_ALPINE_RIDGE:
		case INTEL_CORP_8086_JHL6240_THUNDERBOLT_3_USB_3_1_CONTROLLER_LOW_POWER_ALPINE_RIDGE_LP_2016:
		case INTEL_CORP_8086_JHL6340_THUNDERBOLT_3_USB_3_1_CONTROLLER_C_STEP_ALPINE_RIDGE_2C_2016:
		case INTEL_CORP_8086_JHL7540_THUNDERBOLT_3_USB_CONTROLLER_TITAN_RIDGE_2C_2018:
		case INTEL_CORP_8086_JHL7540_THUNDERBOLT_3_USB_CONTROLLER_TITAN_RIDGE_4C_2018:
		case INTEL_CORP_8086_JHL7540_THUNDERBOLT_3_USB_CONTROLLER_TITAN_RIDGE_DD_2018:
		//case INTEL_CORP_8086CELERON_PENTIUM_SILVER_PROCESSOR_USB_3_0_XHCI_CONTROLLER:
		case INTEL_CORP_8086_ATOM_PROCESSOR_C3000_SERIES_USB_3_0_XHCI_CONTROLLER:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_USB_ENHANCED_HOST_CONTROLLER_1:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_USB_UNIVERSAL_HOST_CONTROLLER_1:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_USB_UNIVERSAL_HOST_CONTROLLER_5:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_USB_ENHANCED_HOST_CONTROLLER_2:
		case INTEL_CORP_8086_C600_X79_SERIES_CHIPSET_USB2_ENHANCED_HOST_CONTROLLER_1:
		case INTEL_CORP_8086_C600_X79_SERIES_CHIPSET_USB2_ENHANCED_HOST_CONTROLLER_2:
		case INTEL_CORP_8086_7_SERIES_C216_CHIPSET_FAMILY_USB_ENHANCED_HOST_CONTROLLER_1:
		case INTEL_CORP_8086_7_SERIES_C216_CHIPSET_FAMILY_USB_ENHANCED_HOST_CONTROLLER_2:
		case INTEL_CORP_8086_7_SERIES_C210_SERIES_CHIPSET_FAMILY_USB_XHCI_HOST_CONTROLLER:
		//case INTEL_DEVICE_8086_6_SERIES_C200_USB_ENHANCED_HOST_CONTROLLER_1:
		//case INTEL_DEVICE_8086_6_SERIES_C200_USB_UNIVERSAL_HOST_CONTROLLER_1:
		//case INTEL_DEVICE_8086_6_SERIES_C200_USB_UNIVERSAL_HOST_CONTROLLER_5:
		//case INTEL_DEVICE_8086_6_SERIES_C200_USB_ENHANCED_HOST_CONTROLLER_2:
		//case INTEL_DEVICE_8086_7_SERIES_C216_CHIPSET_FAMILY_USB_ENHANCED_HOST_CONTROLLER_1:
		//case INTEL_DEVICE_8086_7_SERIES_C216_CHIPSET_FAMILY_USB_ENHANCED_HOST_CONTROLLER_2:
		//case INTEL_DEVICE_8086_7_SERIES_C216_CHIPSET_FAMILY_USB_UNIVERSAL_HOST_CONTROLLER:
		case INTEL_DEVICE_8086_82801AA_USB_CONTROLLER:
		case INTEL_DEVICE_8086_82801AB_USB_CONTROLLER:
		case INTEL_DEVICE_8086_82801BA_BAM_UHCI_USB_1_1_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801BA_BAM_UHCI_USB_1_1_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801E_USB_CONTROLLER:
		case INTEL_DEVICE_8086_82801CA_CAM_USB_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801CA_CAM_USB_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801CA_CAM_USB_CONTROLLER_3:
		case INTEL_DEVICE_8086_82801DB_DBL_DBM_ICH4_ICH4_L_ICH4_M_USB_UHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801DB_DBL_DBM_ICH4_ICH4_L_ICH4_M_USB_UHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801DB_DBL_DBM_ICH4_ICH4_L_ICH4_M_USB_UHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_82801DB_DBM_ICH4_ICH4_M_USB2_EHCI_CONTROLLER:
		case INTEL_DEVICE_8086_82801EB_ER_ICH5_ICH5R_USB_UHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801EB_ER_ICH5_ICH5R_USB_UHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801EB_ER_ICH5_ICH5R_USB_UHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_82801EB_ER_ICH5_ICH5R_USB2_EHCI_CONTROLLER:
		case INTEL_DEVICE_8086_82801EB_ER_ICH5_ICH5R_USB_UHCI_CONTROLLER_4:
		case INTEL_DEVICE_8086_6300ESB_USB_UNIVERSAL_HOST_CONTROLLER_1:
		case INTEL_DEVICE_8086_6300ESB_USB_UNIVERSAL_HOST_CONTROLLER_2:
		case INTEL_DEVICE_8086_6300ESB_USB2_ENHANCED_HOST_CONTROLLER:
		case INTEL_DEVICE_8086_82801FB_FBM_FR_FW_FRW_ICH6_FAMILY_USB_UHCI_1:
		case INTEL_DEVICE_8086_82801FB_FBM_FR_FW_FRW_ICH6_FAMILY_USB_UHCI_2:
		case INTEL_DEVICE_8086_82801FB_FBM_FR_FW_FRW_ICH6_FAMILY_USB_UHCI_3:
		case INTEL_DEVICE_8086_82801FB_FBM_FR_FW_FRW_ICH6_FAMILY_USB_UHCI_4:
		case INTEL_DEVICE_8086_82801FB_FBM_FR_FW_FRW_ICH6_FAMILY_USB2_EHCI_CONTROLLER:
		case INTEL_DEVICE_8086_631XESB_632XESB_3100_CHIPSET_UHCI_USB_CONTROLLER_1:
		case INTEL_DEVICE_8086_631XESB_632XESB_3100_CHIPSET_UHCI_USB_CONTROLLER_2:
		case INTEL_DEVICE_8086_631XESB_632XESB_3100_CHIPSET_UHCI_USB_CONTROLLER_3:
		case INTEL_DEVICE_8086_631XESB_632XESB_3100_CHIPSET_UHCI_USB_CONTROLLER_4:
		case INTEL_DEVICE_8086_631XESB_632XESB_3100_CHIPSET_EHCI_USB2_CONTROLLER:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_USB_UHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_USB_UHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_USB_UHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_USB_UHCI_CONTROLLER_4:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_USB2_EHCI_CONTROLLER:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB_UHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB_UHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB_UHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB_UHCI_CONTROLLER_4:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB_UHCI_CONTROLLER_5:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB_UHCI_CONTROLLER_6:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB2_EHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801H_ICH8_FAMILY_USB2_EHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB_UHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB_UHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB_UHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB_UHCI_CONTROLLER_4:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB_UHCI_CONTROLLER_5:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB_UHCI_CONTROLLER_6:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB2_EHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801I_ICH9_FAMILY_USB2_EHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_PUMA_7_USB_DEVICE_CONTROLLER_OTG:
		case INTEL_DEVICE_8086_CE_MEDIA_PROCESSOR_USB_2E70:
		case INTEL_DEVICE_8086CELERON_PENTIUM_SILVER_PROCESSOR_USB_3_0_XHCI_CONTROLLER_31A8:
		case INTEL_DEVICE_8086_ICE_LAKE_LP_USB_3_1_XHCI_HOST_CONTROLLER_34ed:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB_UHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB_UHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB_UHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB_UHCI_CONTROLLER_4:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB_UHCI_CONTROLLER_5:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB_UHCI_CONTROLLER_6:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB2_EHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_USB2_EHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB_UHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB_UHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB_UHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB_UHCI_CONTROLLER_4:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB_UHCI_CONTROLLER_5:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB_UHCI_CONTROLLER_6:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB2_EHCI_CONTROLLER_1:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_USB2_EHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB2_ENHANCED_HOST_CONTROLLER:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_1:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_2:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_3:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_4:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_5:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_6:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB2_ENHANCED_HOST_CONTROLLER_2:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_7:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_8:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_USB_UNIVERSAL_HOST_CONTROLLER_9:
		case INTEL_DEVICE_8086_TIGER_LAKE_H_USB_32_GEN2X1_XHCI_HOST_CONTROLLER:
		case INTEL_DEVICE_8086_ALDER_LAKE_P_THUNDERBOLT_4_USB_CONTROLLER:
		case INTEL_DEVICE_8086_ELKHART_LAKE_USB_310_XHCI:
		case INTEL_DEVICE_8086_JASPER_LAKE_USB_31_XHCI_HOST_CONTROLLER:
		case INTEL_DEVICE_8086_EP80579_USB_11_CONTROLLER:
		case INTEL_DEVICE_8086_EP80579_USB_20_CONTROLLER:
		case INTEL_DEVICE_8086_ALDER_LAKE_PCH_USB_32_XHCI_HOST_CONTROLLER:
		case INTEL_DEVICE_8086_ALDER_LAKE_N_PCH_USB_32_XHCI_HOST_CONTROLLER:
		case INTEL_DEVICE_8086_THUNDERBOLT_80_120G_USB_CONTROLLER_BARLOW_RIDGE_HOST_80G_2023:
		case INTEL_DEVICE_8086_THUNDERBOLT_USB_CONTROLLER_BARLOW_RIDGE_HOST_40G_2023:
		case INTEL_DEVICE_8086_THUNDERBOLT_80_120G_USB_CONTROLLER_BARLOW_RIDGE_HUB_80G_2023:
		case INTEL_DEVICE_8086_THUNDERBOLT_USB_CONTROLLER_BARLOW_RIDGE_HUB_40G_2023:
		case INTEL_DEVICE_8086_CELERON_N3350_PENTIUM_N4200_ATOM_E3900_SERIES_USB_XHCI_1:
		case INTEL_82371SB_PIIX3_USB:
		case INTEL_82371AB_EB_MB_PIIX4_USB:
		case INTEL_82440MX_USB_UNIVERSAL_HOST_CONTROLLER:
		case INTEL_82372FB_PIIX5_USB:
		case INTEL_RAPTOR_LAKE_USB_3_2_GEN_2X2_XHCI_HOST_CONTROLLER:
		case INTEL_ALDER_LAKE_S_PCH_USB_3_2_GEN_2X2_XHCI_CONTROLLER:
		//case INTEL_METEOR_LAKE_P_USB_3_2_GEN_2X1_XHCI_HOST_CONTROLLER:
		case INTEL_METEOR_LAKE_P_USB_3_2_GEN_2X1_XHCI_HOST_CONTROLLER:
		case INTEL_METEOR_LAKE_P_USB_DEVICE_CONTROLLER:
		case INTEL_METEOR_LAKE_P_THUNDERBOLT_4_USB_CONTROLLER:
		//case INTEL_828011_ICH9_FAMILY_USB_UHCI_CONTROLLER:
		case INTEL_US15W_US15X_US15L_UL11L_POULSBO_USB_UHCI_CONTROLLER_1:
		case INTEL_US15W_US15X_US15L_UL11L_POULSBO_USB_UHCI_CONTROLLER_2:
		case INTEL_US15W_US15X_US15L_UL11L_POULSBO_USB_UHCI_CONTROLLER_3:
		case INTEL_US15W_US15X_US15L_UL11L_POULSBO_USB_EHCI_CONTROLLER:
		case INTEL_US15W_US15X_US15L_UL11L_POULSBO_USB_CLIENT_CONTROLLER:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB_OHCI_CONTROLLER_4:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB_OHCI_CONTROLLER_5:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB_OHCI_CONTROLLER_6:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB2_EHCI_CONTROLLER_2:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB_CLIENT_CONTROLLER:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB_OHCI_CONTROLLER_1:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB_OHCI_CONTROLLER_2:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB_OHCI_CONTROLLER_3:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_USB2_EHCI_CONTROLLER_1:
		case INTEL_ICE_LAKE_THUNDERBOLT_3_USB_CONTROLLER:
		case INTEL_8_SERIES_C220_SERIES_USB_EHCI_1:
		case INTEL_8_SERIES_C220_SERIES_USB_EHCI_2:
		case INTEL_8_SERIES_C220_SERIES_USB_XHCI:
		case INTEL_9_SERIES_CHIPSET_FAMILY_USB_EHCI_CONTROLLER_1:
		case INTEL_9_SERIES_CHIPSET_FAMILY_USB_EHCI_CONTROLLER_2:
		case INTEL_9_SERIES_CHIPSET_FAMILY_USB_XHCI_CONTROLLER:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_USB_EHCI_CONTROLLER_1:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_USB_EHCI_CONTROLLER_2:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_USB_XHCI_HOST_CONTROLLER:
		case INTEL_TIGERLAKE_LP_THUNDERBOLT_USB_CONTROLLER:
		case INTEL_TIGERLAKE_H_THUNDERBOLT_4_USB_CONTROLLER:
		case INTEL_8_SERIES_USB_EHCI_1:
		case INTEL_8_SERIES_USB_EHCI_2:
		case INTEL_8_SERIES_USB_XHCI_HC:
		case INTEL_WILDCAT_POINT_LP_USB_EHCI_CONTROLLER:
		case INTEL_WILDCAT_POINT_LP_USB_XHCI_CONTROLLER:
		case INTEL_SUNRISE_POINT_LP_USB_3_0_XHCI_CONTROLLER:
		case INTEL_CANNON_POINT_LP_USB_3_1_XHCI_CONTROLLER:
		case INTEL_TIGER_LAKE_LP_USB_3_2_GEN_2X1_XHCI_HOST_CONTROLLER:
		case INTEL_100_SERIES_C230_SERIES_CHIPSET_FAMILY_USB_3_0_XHCI_CONTROLLER:
		case INTEL_100_SERIES_C230_SERIES_CHIPSET_FAMILY_USB_DEVICE_CONTROLLER_OTG:
		case INTEL_C620_SERIES_CHIPSET_FAMILY_USB_3_0_XHCI_CONTROLLER:
		case INTEL_200_SERIES_Z370_CHIPSET_FAMILY_USB_3_0_XHCI_CONTROLLER:
		case INTEL_CANNON_LAKE_PCH_USB_3_1_XHCI_HOST_CONTROLLER:
		case INTEL_COMET_LAKE_PCH_V_USB_CONTROLLER:
		case INTEL_RAPTOR_LAKE_P_THUNDERBOLT_4_USB_CONTROLLER:
		case INTEL_LUNAR_LAKE_M_THUNDERBOLT_4_USB_CONTROLLER:
		case INTEL_LUNAR_LAKE_M_USB_3_2_GEN_2X1_XHCI_HOST_CONTROLLER:
			LouPrint("Intel USB Host Found\n");
			USB_INIT(bus, slot, function);
			return true;
			break;
		default:
			break;
		}
	default:
		//vendor not supported check informations
		
		P_PCI_DEVICE_OBJECT PDEV = (P_PCI_DEVICE_OBJECT)LouMalloc(sizeof(PCI_DEVICE_OBJECT));
		
		static uint8_t PciClass = LouKePciReadClass(PDEV);
		static uint8_t PciSubClass = LouKePciReadSubClass(PDEV);
		static uint8_t PciInterfaceValue = LouKePciReadProgIf(PDEV);

		if(((PciClass == 0x0C)
	 	&&(PciSubClass == 0x03)
	 	&&(PciInterfaceValue == 0x00)) || 
		((PciClass == 0x0C)
	 	&&(PciSubClass == 0x03)
	 	&&(PciInterfaceValue == 0x10)) || 
		((PciClass == 0x0C)
	 	&&(PciSubClass == 0x03)
	 	&&(PciInterfaceValue == 0x20)) ||
		((PciClass == 0x0C)
	 	&&(PciSubClass == 0x03)
	 	&&(PciInterfaceValue == 0x30)) 
		){
			LouFree((RAMADD)PDEV, sizeof(PCI_DEVICE_OBJECT));
			USB_INIT(bus,slot,function);
			return true;
		}
		else{
			LouFree((RAMADD)PDEV, sizeof(PCI_DEVICE_OBJECT));
		}
		break;
	}
	return false;
}

void USB_INIT(uint8_t bus,uint8_t slot, uint8_t function) {

	LouPrint("Initializing USB Controller\n");

	P_PCI_DEVICE_OBJECT USB_DEV = (P_PCI_DEVICE_OBJECT)LouMalloc(sizeof(PCI_DEVICE_OBJECT));

	USB_DEV->bus = bus;
	USB_DEV->slot = slot;
	USB_DEV->func = function;

	static uint8_t Class = LouKePciReadClass(USB_DEV);
	static uint8_t SubClass = LouKePciReadSubClass(USB_DEV);
	static uint8_t InterfaceValue = LouKePciReadProgIf(USB_DEV);

	if((Class == 0x0C)
	 &&(SubClass == 0x03)
	 &&(InterfaceValue == 0x00)){
		//Uhci Device
		InitializeUHCIController(USB_DEV);
	 }
	else if((Class == 0x0C)
	 &&(SubClass == 0x03)
	 &&(InterfaceValue == 0x20)){
		//EHCI Device
		InitializeEHCIController(USB_DEV);
	}
	else if((Class == 0x0C)
	&&(SubClass == 0x03)
	&&(InterfaceValue == 0x30)){
		InitializeXHCIController(USB_DEV);
	}
	else if((Class == 0x0C)
	 &&(SubClass == 0x03)
	 &&(InterfaceValue == 0x10)){
		//OHCI Device
		//TODO: get interrupt number & set interrupt enable
		InitializeOHCIController(USB_DEV);
	}


}