@class UILabel, UIButton, CKAttributionImageView, NSArray, NSLayoutConstraint, CKAvatarView, CKAssociatedStickerChatItem;
@protocol CKAttributionStickerDetailsViewDelegate;

@interface CKAttributionStickerDetailsView : UIView

@property (retain, nonatomic) NSLayoutConstraint *nameTrailingConstraint;
@property (weak, nonatomic) id<CKAttributionStickerDetailsViewDelegate> delegate;
@property (retain, nonatomic) CKAssociatedStickerChatItem *stickerChatItem;
@property (readonly, nonatomic) CKAvatarView *avatarView;
@property (readonly, nonatomic) UILabel *stickerPackNameLabel;
@property (readonly, nonatomic) UILabel *senderNameLabel;
@property (readonly, nonatomic) CKAttributionImageView *imageView;
@property (readonly, nonatomic) UIButton *deleteActionButton;
@property (readonly, nonatomic) UIButton *showInStoreActionButton;
@property (readonly, nonatomic) UIButton *downloadActionButton;
@property (readonly, copy, nonatomic) NSArray *viewsToAnimate;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showInAppStoreButtonWasPressed:(id)a0;
- (id)_buttonWithImage:(id)a0 tintColor:(id)a1;
- (void)deleteButtonWasPressed:(id)a0;
- (void)downloadButtonWasPressed:(id)a0;

@end
