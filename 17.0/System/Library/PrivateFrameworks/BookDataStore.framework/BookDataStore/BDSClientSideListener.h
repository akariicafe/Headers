@protocol BDSClientSideProtocol;

@interface BDSClientSideListener : NSObject <BDSClientSideProtocol>

@property (weak, nonatomic) id<BDSClientSideProtocol> delegate;

- (void).cxx_destruct;
- (void)handleServiceNotificationNames:(id)a0 latestChangeToken:(long long)a1;

@end
