@class UIImage;

@interface GKFixedSizeImageView : UIImageView

@property (retain, nonatomic) UIImage *actualImage;

- (void)invalidateIntrinsicContentSize;
- (id)image;
- (void).cxx_destruct;
- (void)setImage:(id)a0;

@end
