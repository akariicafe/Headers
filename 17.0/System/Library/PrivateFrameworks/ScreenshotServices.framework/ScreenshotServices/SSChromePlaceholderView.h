@class UINavigationBar, NSString, NSArray, UIView, UINavigationItem, VKSelectableBarButtonItem, VKImageAnalysisBarButtonItem, UIBarButtonItem, SSVellumOpacityControl;

@interface SSChromePlaceholderView : UIView <UINavigationBarDelegate> {
    UINavigationItem *_managedNavigationItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_doneItem;
    UIBarButtonItem *_deleteItem;
    UIBarButtonItem *_undoItem;
    UIBarButtonItem *_redoItem;
    UIBarButtonItem *_undoRedoSpacerItem;
    UIBarButtonItem *_opacityItem;
    SSVellumOpacityControl *_opacityControl;
    UIView *_opacityView;
    UINavigationBar *_topBar;
    UINavigationBar *_topBarBackground;
    UIView *_topBarSeparatorLine;
    NSArray *_barItems;
    VKSelectableBarButtonItem *_annotationEnabledButton;
    VKImageAnalysisBarButtonItem *_aaBarButtonItem;
}

@property (nonatomic) double contentAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)topBarHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (long long)positionForBar:(id)a0;
- (void)_initializeBarButtonItems;
- (void)_layoutTopBar;
- (void)_updateBarButtonItemPositionsAnimated:(BOOL)a0;

@end
