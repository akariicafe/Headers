@class PRGraphicComplicationContainerViewController, PRInlineComplicationContainerViewController, NSArray, PRComplicationDescriptor, NSString, NSDictionary, BSUIVibrancyConfiguration, PRWidgetGridViewController;
@protocol PRComplicationContainerViewControllerDelegate;

@interface PRComplicationContainerViewController : UIViewController <PRGraphicComplicationContainerViewControllerDelegate, PRInlineComplicationContainerViewControllerDelegate, PRWidgetGridViewControllerDelegate, BSInvalidatable>

@property (retain, nonatomic) PRComplicationDescriptor *inlineComplicationDescriptor;
@property (retain, nonatomic) NSArray *complicationDescriptors;
@property (retain, nonatomic) NSArray *sidebarComplicationDescriptors;
@property (retain, nonatomic) NSDictionary *sidebarIconLayout;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (retain, nonatomic) PRInlineComplicationContainerViewController *inlineComplicationContainerViewController;
@property (retain, nonatomic) PRGraphicComplicationContainerViewController *graphicComplicationContainerViewController;
@property (retain, nonatomic) PRWidgetGridViewController *sidebarWidgetGridViewController;
@property (weak, nonatomic) id<PRComplicationContainerViewControllerDelegate> delegate;
@property (nonatomic) BOOL usesEditingLayout;
@property (nonatomic) long long focusedElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidate;
- (void)loadView;
- (void).cxx_destruct;
- (void)_updateFocusedWithAnimationSettings:(id)a0;
- (void)cancelPrewarmComplicationDescriptor:(id)a0;
- (BOOL)graphicComplicationContainerViewController:(id)a0 canAddComplication:(id)a1;
- (void)graphicComplicationContainerViewController:(id)a0 didCancelDropOperationForComplication:(id)a1;
- (void)graphicComplicationContainerViewController:(id)a0 didDropComplication:(id)a1 atIndex:(long long)a2;
- (void)graphicComplicationContainerViewController:(id)a0 didRemoveComplication:(id)a1;
- (void)graphicComplicationContainerViewController:(id)a0 didTapComplication:(id)a1;
- (void)graphicComplicationContainerViewControllerDidTapAdd:(id)a0;
- (id)initWithInlineComplicationDescriptor:(id)a0 graphicComplicationDescriptors:(id)a1 sidebarComplicationDescriptors:(id)a2 sidebarIconLayout:(id)a3;
- (void)inlineComplicationContainerViewController:(id)a0 didEditComplication:(id)a1;
- (void)inlineComplicationContainerViewControllerDidTapAdd:(id)a0;
- (void)prewarmComplicationDescriptor:(id)a0;
- (void)setComplicationDescriptors:(id)a0 animated:(BOOL)a1;
- (void)setFocusedElement:(long long)a0 animated:(BOOL)a1;
- (void)setFocusedElement:(long long)a0 animationSettings:(id)a1;
- (void)setSidebarComplicationDescriptors:(id)a0 animated:(BOOL)a1;
- (void)setUsesEditingLayout:(BOOL)a0 animated:(BOOL)a1;
- (void)setUsesEditingLayout:(BOOL)a0 animationSettings:(id)a1;
- (void)widgetGridViewController:(id)a0 didAddWidget:(id)a1 atIndex:(long long)a2;
- (void)widgetGridViewController:(id)a0 didRemoveComplication:(id)a1;
- (void)widgetGridViewController:(id)a0 didRequestLaunchForComplicationDescriptor:(id)a1 withAction:(id)a2;
- (void)widgetGridViewController:(id)a0 didUpdateIconLayout:(id)a1;
- (void)widgetGridViewControllerDidTapBackground:(id)a0;

@end
