@class NSString;

@interface HMResidentCapabilities : NSObject <HMResidentCapabilities>

@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) struct _HMResidentCapabilitiesStruct { unsigned char supportsCameraRecording : 1; unsigned char supportsRouterManagement : 1; unsigned char supportsShortcutActions : 1; unsigned char supportsMediaActions : 1; unsigned char supportsCameraSignificantEventNotifications : 1; unsigned char supportsFirmwareUpdate : 1; unsigned char supportsResidentFirmwareUpdate : 1; unsigned char supportsCameraActivityZones : 1; unsigned char supportsFaceClassification : 1; unsigned char supportsNaturalLighting : 1; unsigned char supportsCameraRecordingReachabilityNotifications : 1; unsigned char supportsAnnounce : 1; unsigned char supportsWakeOnLAN : 1; unsigned char supportsLockNotificationContext : 1; unsigned char supportsWalletKey : 1; unsigned char supportsCameraPackageDetection : 1; unsigned char supportsAccessCodes : 1; unsigned char supportsCHIP : 1; unsigned char supportsThreadBorderRouter : 1; unsigned char supportsSiriEndpointSetup : 1; unsigned char supportsCustomMediaApplicationDestination : 1; unsigned char supportsUnifiedMediaNotifications : 1; unsigned char supportsHomeHub : 1; unsigned char supportsResidentFirstAccessoryCommunication : 1; unsigned char supportsThreadNetworkCredentialSharing : 1; unsigned char supportsMatterSharedAdminPairing : 1; unsigned char supportsEventLog : 1; } capabilities;
@property (readonly, nonatomic) BOOL isResidentCapable;
@property (readonly, nonatomic) BOOL supportsCameraRecording;
@property (readonly, nonatomic) BOOL supportsRouterManagement;
@property (readonly, nonatomic) BOOL supportsShortcutActions;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsCameraSignificantEventNotifications;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsCameraActivityZones;
@property (readonly, nonatomic) BOOL supportsFaceClassification;
@property (readonly, nonatomic) BOOL supportsNaturalLighting;
@property (readonly, nonatomic) BOOL supportsCameraRecordingReachabilityNotifications;
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (readonly, nonatomic) BOOL supportsWakeOnLAN;
@property (readonly, nonatomic) BOOL supportsLockNotificationContext;
@property (readonly, nonatomic) BOOL supportsWalletKey;
@property (readonly, nonatomic) BOOL supportsCameraPackageDetection;
@property (readonly, nonatomic) BOOL supportsAccessCodes;
@property (readonly, nonatomic) BOOL supportsCHIP;
@property (readonly, nonatomic) BOOL supportsThreadBorderRouter;
@property (readonly, nonatomic) BOOL supportsSiriEndpointSetup;
@property (readonly, nonatomic) BOOL supportsCustomMediaApplicationDestination;
@property (readonly, nonatomic) BOOL supportsUnifiedMediaNotifications;
@property (readonly, nonatomic) BOOL supportsHomeHub;
@property (readonly, nonatomic) BOOL supportsResidentFirstAccessoryCommunication;
@property (readonly, nonatomic) BOOL supportsThreadNetworkCredentialSharing;
@property (readonly, nonatomic) BOOL supportsMatterSharedAdminPairing;
@property (readonly, nonatomic) BOOL supportsEventLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProtoData:(id)a0;
- (BOOL)isLocalEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtoCapabilities:(id)a0;
- (id)initWithTagUUID:(id)a0 capabilities:(struct _HMResidentCapabilitiesStruct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; })a1;
- (id)pbCapabilities;
- (BOOL)isEqual:(id)a0;

@end
