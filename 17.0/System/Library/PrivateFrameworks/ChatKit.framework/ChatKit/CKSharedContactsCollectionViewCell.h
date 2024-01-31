@class CNAvatarView;

@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) CNAvatarView *avatarView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithContact:(id)a0;

@end
