@class PRComplicationWrapperViewController, NSArray, NSString, NSMutableDictionary, BSUIVibrancyConfiguration;
@protocol UIDropSession, PRGraphicComplicationContainerViewControllerDelegate;

@interface PRGraphicComplicationContainerViewController : UIViewController <UIDragInteractionDelegate, UIDropInteractionDelegate, PRComplicationWrapperViewControllerDelegate, BSInvalidatable> {
    long long _layoutStyle;
    NSMutableDictionary *_widgetViewControllersByUniqueIdentifier;
    PRComplicationWrapperViewController *_prewarmedComplicationWrapperViewController;
    unsigned long long _lastProposedDropOperation;
}

@property (retain, nonatomic) id<UIDropSession> activeDropSession;
@property (retain, nonatomic) NSArray *complicationDescriptors;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (weak, nonatomic) id<PRGraphicComplicationContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)viewDidLoad;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)invalidate;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)loadView;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)_hostViewControllerForComplicationDescriptor:(id)a0;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)_tapGestureRecognized:(id)a0;
- (void).cxx_destruct;
- (void)_addDescriptor:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)_addHostViewControllerForDescriptor:(id)a0 animated:(BOOL)a1;
- (id)_complicationDescriptorForDragItem:(id)a0;
- (id)_complicationLayout;
- (void)_removeDescriptor:(id)a0;
- (void)_updateComplicationLayoutAnimated:(BOOL)a0;
- (void)cancelPrewarmComplicationDescriptor:(id)a0;
- (void)complicationWrapperViewControllerDidTapComplication:(id)a0;
- (void)complicationWrapperViewControllerDidTapRemove:(id)a0;
- (id)initWithComplicationDescriptors:(id)a0 layoutStyle:(long long)a1;
- (void)prewarmComplicationDescriptor:(id)a0;
- (void)setComplicationDescriptors:(id)a0 animated:(BOOL)a1;
- (void)setFocused:(BOOL)a0 animated:(BOOL)a1;
- (void)setFocused:(BOOL)a0 animationSettings:(id)a1;

@end
