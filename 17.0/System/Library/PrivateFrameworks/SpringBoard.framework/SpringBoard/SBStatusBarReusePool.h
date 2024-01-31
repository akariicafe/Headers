@class UIWindow, NSString, NSHashTable, SBWindowScene, NSMutableArray;

@interface SBStatusBarReusePool : NSObject <BSDescriptionProviding> {
    NSHashTable *_statusBars;
    UIWindow *_recycledStatusBarsContainerWindow;
    NSMutableArray *_recycledStatusBars;
}

@property (weak, nonatomic) SBWindowScene *windowScene;
@property (copy, nonatomic) id /* block */ newStatusBarConfigurationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)enumerateStatusBars:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (id)getReusableStatusBarWithReason:(id)a0;
- (void)_resetStatusBar:(id)a0 clearOverrides:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)getReusableStatusBarWithReason:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)recycleStatusBar:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_removeStatusBarContainer:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (unsigned long long)_statusBarInstanceLimit;

@end
