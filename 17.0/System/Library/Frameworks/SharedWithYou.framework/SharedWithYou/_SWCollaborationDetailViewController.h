@class SWHighlight, NSObject, NSItemProvider, SWCollaborationDetailViewModel, UIViewController;
@protocol UICloudSharingControllerDelegate;

@interface _SWCollaborationDetailViewController : UIViewController

@property (nonatomic, retain) SWCollaborationDetailViewModel *viewModel;
@property (nonatomic, retain) SWHighlight *collaborationHighlight;
@property (retain, nonatomic) UIViewController *typeErasedHostingController;
@property (weak, nonatomic) id<UICloudSharingControllerDelegate> cloudSharingControllerDelegate;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSObject *typeErasedViewModel;
@property (retain, nonatomic) UIViewController *typeErasedHostingController;
@property (weak, nonatomic) id<UICloudSharingControllerDelegate> cloudSharingControllerDelegate;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSObject *typeErasedViewModel;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithItemProvider:(id)a0;
- (id)initWithHighlight:(id)a0;
- (void)setListContent:(id)a0;
- (id)initWithHighlight:(id)a0 listContent:(id)a1;
- (id)initWithItemProvider_impl:(id)a0;
- (void)setListContentView:(id)a0;
- (void)setManageButtonTitle:(id)a0;
- (void)setShowManageButton:(BOOL)a0;

@end
