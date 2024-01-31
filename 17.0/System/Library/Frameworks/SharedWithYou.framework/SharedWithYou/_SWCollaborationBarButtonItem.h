@class SWHighlight, _SWCollaborationButtonView, NSItemProvider, NSString;
@protocol UICloudSharingControllerDelegate;

@interface _SWCollaborationBarButtonItem : UIBarButtonItem <UIPopoverPresentationControllerDelegate>

@property (nonatomic, retain) SWHighlight *highlight;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButtonView;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) id<UICloudSharingControllerDelegate> cloudSharingControllerDelegate;
@property (nonatomic) unsigned long long activeParticipantCount;
@property (nonatomic) BOOL isContentShared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithItemProvider:(id)a0;
- (id)initWithHighlight:(id)a0;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithCollaborationButtonView:(id)a0;
- (id)initWithHighlight:(id)a0 detailViewListContent:(id)a1;
- (void)setDetailViewListContent:(id)a0;
- (void)setManageButtonTitle:(id)a0;
- (void)setShowManageButton:(BOOL)a0;

@end
