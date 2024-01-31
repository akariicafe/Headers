@class NSString;

@interface SBMedusaHostedKeyboardWindowLevelAssertion : NSObject <BSInvalidatable> {
    id /* block */ _invalidationHandler;
}

@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double windowLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
