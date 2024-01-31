@class MUPlacePhotoViewObfuscationModel, UIImageView, UIImage, MUPlacePhotoObfuscationView, NSString;

@interface MUPlacePhotoView : UIScrollView <UIScrollViewDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isZoomed;
@property (retain, nonatomic) MUPlacePhotoObfuscationView *obfuscationView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL needsFullImageDownload;
@property (retain, nonatomic) MUPlacePhotoViewObfuscationModel *obfuscationModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForZoomingInScrollView:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateObfuscationPosition;
- (void)_updateObfuscationText;
- (void)_updateObfuscationWithPreviousModel:(id)a0;
- (void)zoomWithGestureRecognizer:(id)a0;

@end
