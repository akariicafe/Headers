@class NSString, PXSharedLibraryInvitationContentView, UITraitCollection;
@protocol PXSharedLibraryParticipant, PXSharedLibraryInvitationViewDelegate;

@interface PXSharedLibraryInvitationView : UICollectionViewCell <UIContextMenuInteractionDelegate> {
    PXSharedLibraryInvitationContentView *_invitationContentView;
}

@property (retain, nonatomic) id<PXSharedLibraryParticipant> owner;
@property (retain, nonatomic) UITraitCollection *overrideTraitCollection;
@property (weak, nonatomic) id<PXSharedLibraryInvitationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)focusEffect;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
