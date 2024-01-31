@class NSString, PXCMMInvitationView, PXGadgetSpec, PXCMMInvitationViewModelManager, NSManagedObjectID;
@protocol PXCMMWorkflowPresenting, PXCMMInvitationGadgetDelegate, PXCMMInvitation, PXGadgetDelegate;

@interface PXCMMInvitationGadget : NSObject <PXCMMInvitationViewDelegate, PXGadget> {
    id<PXCMMInvitation> _invitation;
    PXCMMInvitationViewModelManager *_viewModelManager;
    PXCMMInvitationView *_invitationView;
    struct CGSize { double width; double height; } _requestedPosterImageSize;
    double _requestedWidth;
    BOOL _didRequestCachingOfPosterImage;
}

@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter;
@property (retain, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) id<PXCMMInvitation> invitation;
@property (weak, nonatomic) id<PXCMMInvitationGadgetDelegate> invitationGadgetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

+ (id)_imageRequestOptions;
+ (id)_sharedUserInitiatedQueue;

- (void)commitPreviewViewController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x0; double x1; })a0 fromSourceView:(id)a1;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_cachePosterImageWithWidth:(double)a0;
- (void)_clearPosterImageCache;
- (void)_createViewModelManagerIfNecessary;
- (void)_presentDetailViewAnimated:(BOOL)a0;
- (void)_updateOpaqueAncestorBackgroundColor;
- (void)contentHasBeenSeen;
- (id)initWithWorkflowPresenter:(id)a0;
- (void)invitationViewSizeThatFitsDidChange:(id)a0;
- (void)prefetchDuringScrollingForWidth:(double)a0;
- (void)prepareCollectionViewItem:(id)a0;
- (void)presentDetailViewAnimated:(BOOL)a0;
- (void)presentDetailViewForInvitationView:(id)a0 animated:(BOOL)a1;
- (BOOL)supportsHighlighting;
- (id)uniqueGadgetIdentifier;
- (void)userDidSelectGadget;

@end
