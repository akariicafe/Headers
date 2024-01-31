@class NSUUID, UIImageView, AVTMSStickerView, UILabel, CAShapeLayer;
@protocol AVTStickerCollectionViewCellDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTStickerCollectionViewCell : UICollectionViewCell <AVTMSStickerViewDelegate>

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) AVTMSStickerView *stickerView;
@property (readonly, nonatomic) UILabel *prereleaseLabel;
@property (nonatomic) BOOL stickerViewIsAnimating;
@property (nonatomic) struct CGSize { double width; double height; } fullImageSize;
@property (retain, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (nonatomic) BOOL allowsPeel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (nonatomic) BOOL showPrereleaseSticker;
@property (nonatomic) BOOL showSelectionLayer;
@property (weak, nonatomic) id<AVTStickerCollectionViewCellDelegate> delegate;
@property (weak, nonatomic) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;

+ (id)cellIdentifier;
+ (double)imageInsetForWidth:(double)a0;
+ (struct CGPath { } *)selectionPathInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })imageSizeFromURL:(id)a0;
- (void)purgeImageContents;
- (void)setupPrereleaseLabelIfNeeded;
- (void)stickerViewDidBeginPeel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickerViewFrameForImageSize:(struct CGSize { double x0; double x1; })a0 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)stickerViewWasTapped:(id)a0;
- (void)updateWithImage:(id)a0 sticker:(id)a1 animated:(BOOL)a2;

@end
