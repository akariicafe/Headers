@class NSArray, NSTimer, IMOneTimeCodeUtilities;
@protocol IMSyncedSettingsManaging, IMDaemonListenerProtocol;

@interface IMDOneTimeCodeManager : NSObject

@property (retain, nonatomic) NSArray *validCodes;
@property (retain, nonatomic) NSTimer *codeInvalidationTimer;
@property (retain, nonatomic) id<IMDaemonListenerProtocol> broadcaster;
@property (retain, nonatomic) id<IMDaemonListenerProtocol> broadcasterOverride;
@property (retain, nonatomic) IMOneTimeCodeUtilities *otcUtilities;
@property (retain, nonatomic) id<IMSyncedSettingsManaging> syncedSettingsManager;
@property (nonatomic) BOOL autoDeletionPreference;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)onboardDeleteVerificationCodesIfNeededWithCompletionHandler:(id /* block */)a0;
- (id)_localizedStringForKey:(id)a0;
- (void)consumeCodeWithGuid:(id)a0;
- (void)onboardDeleteVerificationCodesIfNeededWithMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setNewCodeAndPrepareInvalidationTimer:(id)a0;
- (void)_updateLastMessageTimeStampForChat:(id)a0;
- (id)_urlForPasswordsIcon;
- (void)broadcastCodeStatusToClients;
- (void)consumeCodeWithGuid:(id)a0 codeExpired:(BOOL)a1;
- (id)initWithBroadcaster:(id)a0 otcUtilities:(id)a1;
- (void)moveOneTimeCodeToRecentlyDeleted:(id)a0;
- (void)startTrackingCode:(id)a0;

@end
