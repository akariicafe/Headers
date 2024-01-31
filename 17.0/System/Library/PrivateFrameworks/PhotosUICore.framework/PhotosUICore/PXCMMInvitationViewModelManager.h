@class PXMomentShareStatusPresentation, NSString, PXCMMInvitationSpec, PXCMMInvitationViewModel;
@protocol PXCMMInvitation;

@interface PXCMMInvitationViewModelManager : NSObject <PXChangeObserver> {
    id<PXCMMInvitation> _invitation;
    PXCMMInvitationSpec *_spec;
    long long _bulletPrefix;
}

@property (retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation;
@property (readonly, nonatomic) PXCMMInvitationViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_serialQueue;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_invitationsIsNewMonitorDidChange:(id)a0;
- (void)_registerMomentShareStatusPresentation;
- (BOOL)_showIsNewStatusInAttributedTitle;
- (void)_updateExpirationTitle:(id)a0;
- (void)_updateIsNew:(id)a0;
- (void)_updatePosterTitle:(id)a0;
- (void)_updateStatusString:(id)a0;
- (void)_updateTitle:(id)a0;
- (id)initWithInvitation:(id)a0 invitationSpec:(id)a1 bulletPrefix:(long long)a2;

@end
