@class UIView, NSString, UIWindow, UIRemoteInputViewInfo, UIViewController, NSLayoutConstraint, UIInputViewSet, UIInputViewController;

@interface UIRemoteInputViewHost : NSObject <_UIRemoteInputViewHostWindowDelegate> {
    UIViewController *_inputRootViewController;
    UIInputViewController *_inputViewController;
    UIView *_inputView;
    NSLayoutConstraint *_inputViewWidthConstraint;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_inputViewBottomConstraint;
    UIViewController *_assistantViewController;
    struct CGSize { double width; double height; } _previousInputViewSize;
}

@property (retain, nonatomic) UIInputViewSet *inputViewSet;
@property (readonly, nonatomic) UIRemoteInputViewInfo *inputViewInfo;
@property (readonly, nonatomic) UIRemoteInputViewInfo *assistantViewInfo;
@property (nonatomic) BOOL shouldShowDockView;
@property (readonly, nonatomic) UIWindow *inputViewWindow;
@property (readonly, nonatomic) UIWindow *assistantViewWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })assistantViewInsets;
- (id)remoteAssistantItemForResponder:(id)a0;
- (id)rtiGroupsForBarButtonItemGroups:(id)a0;
- (id)settingsScene;
- (BOOL)updateAssistantViewIfNecessary;
- (BOOL)updateCustomInputViewIfNecessary;
- (void)updateInputViewsIfNecessary;

@end
