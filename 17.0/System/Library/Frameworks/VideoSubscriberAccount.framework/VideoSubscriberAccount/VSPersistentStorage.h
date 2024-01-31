@class VSAccountChannelsCenter, VSPrivacyVoucherLockbox, VSAccountStore, VSPrivacyFacade;

@interface VSPersistentStorage : NSObject

@property (readonly, nonatomic) VSAccountStore *accountStore;
@property (readonly, nonatomic) VSAccountChannelsCenter *channelsCenter;
@property (readonly, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox;
@property (readonly, nonatomic) VSPrivacyFacade *privacyFacade;

+ (id)defaultStorageDirectoryURL;

- (id)initWithAccountStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0 channelsCenterClass:(Class)a1;

@end
