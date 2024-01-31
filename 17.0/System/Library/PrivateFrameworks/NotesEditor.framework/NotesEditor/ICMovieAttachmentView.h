@class CALayer, UIImage;

@interface ICMovieAttachmentView : ICImageAttachmentView

@property (retain, nonatomic) CALayer *playButtonLayer;
@property (retain, nonatomic) UIImage *playButtonImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playButtonFrame;
@property (nonatomic) BOOL icaxIsShowingPlayer;

- (id)accessibilityLabel;
- (BOOL)accessibilityIgnoresInvertColors;
- (void).cxx_destruct;
- (id)accessibilityUserInputLabels;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)willDeleteAttachment;
- (id)placeholderImageSystemName;
- (BOOL)allowsPictureInPicture;
- (void)updateImageSize;
- (void)didTapAttachment:(id)a0;
- (id)icaxHintString;
- (void)setShowLoadingImage:(BOOL)a0;
- (void)sharedInit:(BOOL)a0;
- (BOOL)shouldPlayFullscreenOnly;

@end
