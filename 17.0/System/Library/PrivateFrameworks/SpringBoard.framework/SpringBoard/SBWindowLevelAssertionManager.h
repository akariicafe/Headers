@class NSString, NSMapTable;
@protocol SBWindowLevelAssertionManagerDelegate;

@interface SBWindowLevelAssertionManager : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSMapTable *windowLevelAssertionsPerScene;
@property (weak, nonatomic) id<SBWindowLevelAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)acquireWindowLevelAssertionWithPriority:(long long)a0 windowLevel:(double)a1 windowScene:(id)a2 reason:(id)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_notifyDelegateAssertionsDidUpdateForWindowScene:(id)a0;
- (id)highestPriorityWindowLevelAssertionForWindowScene:(id)a0;

@end
