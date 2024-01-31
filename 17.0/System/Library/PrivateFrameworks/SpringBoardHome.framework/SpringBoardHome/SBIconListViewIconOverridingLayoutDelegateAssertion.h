@class NSString, SBIconListView;
@protocol SBIconListLayoutDelegate;

@interface SBIconListViewIconOverridingLayoutDelegateAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, weak, nonatomic) id<SBIconListLayoutDelegate> layoutDelegate;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) SBIconListView *listView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithListView:(id)a0 layoutDelegate:(id)a1 reason:(id)a2;

@end
