@class CKAvatarView;

@interface CKTranscriptAvatarSupplementaryView : CKTranscriptCollectionSupplementaryView

@property (retain, nonatomic) CKAvatarView *avatarView;

+ (id)supplementaryViewKindPrefix;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureForChatItem:(id)a0 context:(id)a1;

@end
