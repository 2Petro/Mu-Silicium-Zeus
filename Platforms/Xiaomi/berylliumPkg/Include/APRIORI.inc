APRIORI DXE {
  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/beryllium/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

  # Core Drivers
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf

  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/beryllium/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/FontDxe/FontDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/beryllium/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/beryllium/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  
  INF Binaries/beryllium/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/XhciDxe/XhciDxe.inf
  

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

  INF Binaries/beryllium/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/beryllium/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/beryllium/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/beryllium/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
}
