@class CKLabel, UIView, CKAvatarView, CKEntity;

@interface CKMentionSuggestionCell : UICollectionViewCell

@property (retain, nonatomic) CKLabel *handleLabel;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UIView *hoverView;
@property (retain, nonatomic) CKEntity *suggestedEntity;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didHoverOverCell:(id)a0;

@end
