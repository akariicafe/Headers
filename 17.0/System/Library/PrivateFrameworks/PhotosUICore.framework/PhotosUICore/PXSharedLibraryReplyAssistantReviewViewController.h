@class OBBoldTrayButton, PXSharedLibraryStatusProvider, NSString, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryReplyAssistantReviewViewController : OBWelcomeController <PXChangeObserver, PXAssistantViewController>

@property (readonly, nonatomic) OBBoldTrayButton *movePhotosButton;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateIcon;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)acceptInvitation;
- (void)_setIsProcessing:(BOOL)a0;
- (void)_updateHeaderText;
- (id)initWithViewModel:(id)a0 sharedLibraryStatusProvider:(id)a1;
- (void)moveButtonTapped:(id)a0;

@end
