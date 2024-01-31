@class PUPhotoCommentEntryView;

@interface PUPhotoPostCommentTextEntryCell : UITableViewCell

@property (retain, nonatomic) PUPhotoCommentEntryView *textEntryView;

+ (void)preferredContentSizeDidChange;
+ (double)heightForWidth:(double)a0;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
