@class SBAuthenticationFeedback;
@protocol SBBiometricUnlockBehavior;

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject

@property (readonly, nonatomic) id<SBBiometricUnlockBehavior> behavior;
@property (readonly, nonatomic) id request;
@property (readonly, nonatomic) SBAuthenticationFeedback *feedback;

- (void).cxx_destruct;
- (id)initWithBehavior:(id)a0 request:(id)a1 feedback:(id)a2;

@end
