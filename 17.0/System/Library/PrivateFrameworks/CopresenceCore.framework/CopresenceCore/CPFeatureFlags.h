@class NSString;

@interface CPFeatureFlags : NSObject <CPFeatureFlags>

@property (readonly, nonatomic) BOOL qrPluginEncryptionEnabled;
@property (readonly, nonatomic) BOOL expanseParticipantIDHashed;
@property (readonly, nonatomic) BOOL expanseEnabled;
@property (readonly, nonatomic) BOOL expanseTopicStateEnabled;
@property (readonly, nonatomic) BOOL mochiEnabled;
@property (readonly, nonatomic) BOOL unreliableMessengerEnabled;
@property (readonly, nonatomic) BOOL sharePlayLiteEnabled;
@property (readonly, nonatomic) BOOL autoGameCenterEnabled;
@property (readonly, nonatomic) BOOL gameCenterSharePlayIntegration;
@property (readonly, nonatomic) BOOL gameCenterFastSyncTransport;
@property (readonly, nonatomic) BOOL newApplicationLauncherEnabled;
@property (readonly, nonatomic) BOOL sharePlayInFaceTimeCanvasEnabled;
@property (readonly, nonatomic) BOOL sharePlayAttachmentLedgerEnabled;
@property (readonly, nonatomic) BOOL wranglerEnabled;
@property (readonly, nonatomic) BOOL fastSyncPresenceSeparationEnabled;
@property (readonly, nonatomic) BOOL fastSyncRecoveryMessageHandlingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
