@class UIImageView, MRUImageLoader, MRUShadowView, UIPointerStyle, UIView, MRUVisualStylingProvider, NSString, NSHashTable, MRUArtwork, MSVTimer, MRUArtworkController, MPArtworkCatalog, UIImage;

@interface MRUArtworkView : UIControl <MRUVisualStylingProviderObserver, MRUArtworkControllerDelegate, MRUArtworkViewObservable>

@property (retain, nonatomic) MRUArtworkController *controller;
@property (retain, nonatomic) MRUShadowView *artworkShadowView;
@property (retain, nonatomic) MSVTimer *artworkTimer;
@property (nonatomic) long long failedRetryCount;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isArtworkControllerEnabled;
@property (retain, nonatomic) UIImageView *artworkImageView;
@property (retain, nonatomic) UIView *placeholderBackground;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (nonatomic) double artworkLoadingTimeout;
@property (retain, nonatomic) MRUImageLoader *imageLoader;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (retain, nonatomic) MRUArtwork *artwork;
@property (retain, nonatomic) MPArtworkCatalog *catalog;
@property (retain, nonatomic) UIImage *artworkImage;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) UIPointerStyle *pointerStyle;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long style;
@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) BOOL useVisualEffectPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSquareArtwork;
- (void)updateArtworkFittingSize;
- (void)updateStyle;
- (void)removeObserver:(id)a0;
- (void)userInterfaceStyleChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })artworkFrame;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)controller:(id)a0 didStartLoadingImageForCatalog:(id)a1;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })artworkFrameForSize:(struct CGSize { double x0; double x1; })a0 availableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)artworkLoadingDidTimeoutInController:(id)a0;
- (void)layoutSubviews;
- (void)controller:(id)a0 didLoadArtworkImage:(id)a1;
- (void)addObserver:(id)a0;
- (void)updatePlaceholderBackground;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isSquare:(struct CGSize { double x0; double x1; })a0;

@end
