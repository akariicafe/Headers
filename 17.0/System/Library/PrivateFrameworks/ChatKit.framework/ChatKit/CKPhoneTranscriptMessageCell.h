@class UIImageView, CKAvatarView;

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell

@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UIImageView *printableAvatarView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)contactImageView;
- (void)layoutSubviewsForContents;
- (void)setShowAvatarView:(BOOL)a0 withContact:(id)a1 preferredHandle:(id)a2 avatarViewDelegate:(id)a3;

@end
