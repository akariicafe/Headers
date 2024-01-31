@class UIImageView, UILabel;
@protocol PXSharedLibraryParticipant;

@interface PXSharedLibraryInvitationContentView : UIView {
    UIImageView *_badgeView;
}

@property (retain, nonatomic) id<PXSharedLibraryParticipant> owner;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *textLabel;

- (void)_updateTextLabel;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (id)_createCombinedImage:(id)a0 displayScale:(double)a1 isRTL:(BOOL)a2;
- (void)_updateImageViewWithImage:(id)a0 owner:(id)a1;

@end
