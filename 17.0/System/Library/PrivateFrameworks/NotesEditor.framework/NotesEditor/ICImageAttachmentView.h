@class CALayer, UIImage, UIImageView;

@interface ICImageAttachmentView : ICAttachmentView

@property (retain) CALayer *imageLayer;
@property (weak, nonatomic) UIImage *image;
@property (nonatomic) BOOL shouldUpdateLayoutInImageDidLoad;
@property (nonatomic) BOOL shouldTryToReloadImageIfLoadingFails;
@property (copy, nonatomic) id /* block */ imageLoadingCancelBlock;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL shouldShowLoadingImage;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (readonly, nonatomic) BOOL isThumbnailView;

+ (id)ICLoadingPlaceholderBackgroundColor;
+ (double)ICLoadingPlaceholderIconSize;
+ (id)ICLoadingPlaceholderIconColor;

- (id)accessibilityLabel;
- (struct CGSize { double x0; double x1; })imageSize;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)dealloc;
- (void)setHighlightColor:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)accessibilityUserInputLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (id)imageForPrinting;
- (void)setupEventHandling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForContent;
- (void)updateImageSize;
- (void)animateImageArrival;
- (id)icaxHintString;
- (id)imageContentsGravity;
- (void)imageDidLoad:(id)a0 shouldFade:(BOOL)a1;
- (BOOL)isAttachmentEditable;
- (void)prepareForPrinting;
- (void)refreshLoadingImage;
- (void)setShowLoadingImage:(BOOL)a0;
- (void)setupBorderForLayer:(id)a0;
- (void)setupImagePlaceholder;
- (void)setupImagePlaceholderIfNecessary;
- (void)sharedInit:(BOOL)a0;
- (BOOL)showLoadingImage;
- (void)updateImageInView:(BOOL)a0;
- (void)updateImageInViewIfNecessary;

@end
