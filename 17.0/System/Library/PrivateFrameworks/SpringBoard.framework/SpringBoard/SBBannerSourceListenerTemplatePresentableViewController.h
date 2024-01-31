@class PLPillView, NSString, NSUUID, FBScene, UIViewController;
@protocol BNTemplateContentProvidingSpecifying, BNPresentableContext, BNBannerSourceListenerPresentableDelegate, BNPresentable;

@interface SBBannerSourceListenerTemplatePresentableViewController : BNBannerSourceListenerPresentableViewController <BNBannerSourceListenerTemplatePresentable> {
    id<BNTemplateContentProvidingSpecifying> _templateContentProvidingSpecification;
    PLPillView *_pillView;
}

@property (readonly, nonatomic, getter=isTemplateContent) BOOL templateContent;
@property (readonly, nonatomic) id<BNPresentable> presentable;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) int bannerAppearState;
@property (weak, nonatomic) id<BNBannerSourceListenerPresentableDelegate> delegate;
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_pillView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (id)initWithSpecification:(id)a0 serviceDomain:(id)a1 readyCompletion:(id /* block */)a2;
- (id)leadingTemplateViewProvider;
- (id)primaryTemplateItemProvider;
- (BOOL)providesTemplateContent;
- (id)secondaryTemplateItemProvider;
- (id)trailingTemplateViewProvider;
- (void)_handleButtonPrimaryAction:(id)a0 forEvent:(long long)a1;
- (void)_handleTapOnPillView:(id)a0;
- (id)_templateContentProvider;

@end
