@class NSString;

@interface SBBannerGestureRecognizerPriorityAssertion : NSObject <BSInvalidatable> {
    id /* block */ _invalidationHandler;
    id /* block */ _enablementChangeHandler;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidBannerGestureRecognizerPriority:(long long)a0;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithPriority:(long long)a0 reason:(id)a1 enablementChangeHandler:(id /* block */)a2 invalidationHandler:(id /* block */)a3;

@end
