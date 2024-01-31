@class NSString;

@interface SXGradientFillDarkModePolicyException : NSObject <SXDarkModePolicyException>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)shouldApplyDarkModeToComponentStyle:(id)a0 component:(id)a1 DOM:(id)a2;

@end
