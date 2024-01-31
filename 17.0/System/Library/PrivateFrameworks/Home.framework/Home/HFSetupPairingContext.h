@class HMSetupAccessoryDescription;

@interface HFSetupPairingContext : NSObject

@property (retain, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (nonatomic) BOOL isTrustedOrigin;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSetupAccessoryDescription:(id)a0 isTrustedOrigin:(BOOL)a1;

@end
