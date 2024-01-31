@class NSArray, NSUndoManager, NSString, VSRemoteNotifier;

@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate>

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (readonly, copy, nonatomic) NSArray *unredeemedVouchers;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getVouchersFromSelectedAppDescriptions:(id)a0 forProviderID:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (id)_voucherArchiveURL;
- (void)issueVouchers:(id)a0;
- (void)issueVouchersForApps:(id)a0 providerID:(id)a1;
- (void)redeemVoucher:(id)a0;
- (void)removeAllVouchers;
- (void)setUnredeemedVouchers:(id)a0;

@end
