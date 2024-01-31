@class NSString, BKMesaSecureIntentProvider;

@interface BuddySecureIntentClientView : UIView <SecureIntentClientView>

@property (weak, nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
