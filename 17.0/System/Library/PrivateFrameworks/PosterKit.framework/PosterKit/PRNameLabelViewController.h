@class PRIncomingCallTextViewAdapter, UIFont, PRNameLabelViewControllerTransition, NSString, PREditorElementLayoutController;

@interface PRNameLabelViewController : UIViewController <PREditorTitleViewController>

@property (retain, nonatomic) PRIncomingCallTextViewAdapter *nameTextViewAdapter;
@property (retain, nonatomic) UIFont *baseFont;
@property (retain, nonatomic) PRNameLabelViewControllerTransition *currentTransition;
@property (retain, nonatomic) PREditorElementLayoutController *layoutController;
@property (copy, nonatomic) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (id)vibrancyView;
- (void)loadView;
- (id)effectiveFont;
- (void).cxx_destruct;
- (void)pr_setElements:(unsigned long long)a0;
- (id)beginInteractiveTransitionToVibrancyConfiguration:(id)a0;
- (double)idealFontSize;
- (id)pr_baseFont;
- (id)pr_beginInteractiveTransitionToBaseFont:(id)a0 vibrancyConfiguration:(id)a1 cachingVibrancyTransitionProvider:(id)a2;
- (void)pr_setBackgroundType:(long long)a0;
- (void)pr_setDisplayDate:(id)a0;
- (void)pr_setDisplayString:(id)a0;
- (void)pr_setStylingFromTitleStyleConfiguration:(id)a0 withExtensionBundleURL:(id)a1 forRole:(id)a2;
- (void)pr_setUsesEditingLayout:(BOOL)a0;
- (void)removeIncomingCallTextViewAdapterFromParent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForLayout:(unsigned long long)a0;
- (void)transition:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)transition:(id)a0 didUpdate:(double)a1;

@end
