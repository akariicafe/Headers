@class NSHashTable, MRUShadowView, UIImage, NSString, UIImageView, MRUArtwork, MSVTimer, MRUArtworkController, MRUVisualStylingProvider, MRUFlippingArtworkLayer;

@interface MRUFlippingArtworkView : UIView <MRUArtworkControllerDelegate, MRUVisualStylingProviderObserver, MRUArtworkViewObservable>

@property (retain, nonatomic) MRUFlippingArtworkLayer *artworkLayer;
@property (retain, nonatomic) MRUShadowView *artworkShadowView;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIImage *artworkImage;
@property (nonatomic) BOOL currentItemHasChangedSinceArtworkLastSet;
@property (retain, nonatomic) MRUArtworkController *controller;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) long long pendingTransitionDirection;
@property (retain, nonatomic) MSVTimer *setArtworkThrottleTimer;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (retain, nonatomic) MRUArtwork *artwork;
@property (nonatomic) long long style;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSquareArtwork;
- (void)updateStyle;
- (void)removeObserver:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })artworkFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)controller:(id)a0 didStartLoadingImageForCatalog:(id)a1;
- (void)visualStylingProviderDidChange:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })artworkFrameForSize:(struct CGSize { double x0; double x1; })a0 availableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)artworkLoadingDidTimeoutInController:(id)a0;
- (void)layoutSubviews;
- (void)controller:(id)a0 didLoadArtworkImage:(id)a1;
- (void)addObserver:(id)a0;
- (BOOL)isSquare:(struct CGSize { double x0; double x1; })a0;
- (void)setArtwork:(id)a0 transitionDirection:(long long)a1;
- (void)setArtworkImageWithThrottle:(id)a0 updatePlaceholder:(BOOL)a1;
- (BOOL)shouldTransitionFromImage:(id)a0 toImage:(id)a1;
- (void)updateOpacity;
- (void)updatePlaceholder;

@end
