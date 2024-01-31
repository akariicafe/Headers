@class NSString, UIImageView, NSUUID, UILabel;

@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *prereleaseLabel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (nonatomic) BOOL showPrereleaseSticker;

+ (id)identifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithImage:(id)a0;
- (void)setupPrereleaseLabelIfNeeded;
- (void)updateWithDefaultImage;

@end
