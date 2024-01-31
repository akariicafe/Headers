@class SBSKeyboardFocusService;

@interface _UIONavigationBarTitleRenamerConnectionAction : _UIOServerAction

@property (retain, nonatomic) SBSKeyboardFocusService *kfService;

- (BOOL)isPermitted;
- (void).cxx_destruct;
- (BOOL)_addViewToHierarchyForConnection:(id)a0 session:(id)a1 error:(id *)a2;
- (void)_removeViewFromHierarchyForConnection:(id)a0 session:(id)a1;
- (void)_setupKeyboardEventDeferralForConnection:(id)a0;
- (void)_teardownKeyboardEventDeferralForConnection:(id)a0;
- (id)initWithSession:(id)a0 action:(long long)a1 responseHandler:(id /* block */)a2;
- (void)performActionFromConnection:(id)a0;

@end
