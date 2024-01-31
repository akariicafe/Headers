@class UIScrollView, SXStandaloneTextInfo, UITapGestureRecognizer, UISwipeGestureRecognizer, NSString, SXFullscreenCaption, SXTextTangierStorage, SXStandaloneTextLayout, SXTextTangierDocumentRoot, UIVisualEffectView, SXTextSource, SXAutoSizedCanvasController;
@protocol SXFullscreenCaptionViewDelegate, SXComponentActionHandler, SXTextSourceFactory;

@interface SXFullscreenCaptionView : UIView <SXAutoSizedCanvasControllerDelegate, SXStandaloneTextLayoutDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>

@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler;
@property (readonly, nonatomic) id<SXTextSourceFactory> textSourceFactory;
@property (retain, nonatomic) SXAutoSizedCanvasController *autoSizeCanvasController;
@property (retain, nonatomic) SXTextTangierDocumentRoot *documentRoot;
@property (retain, nonatomic) SXStandaloneTextInfo *captionInfo;
@property (retain, nonatomic) SXStandaloneTextLayout *captionLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } temporaryLayoutRect;
@property (nonatomic) struct CGSize { double width; double height; } fullSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fullInsets;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer;
@property (retain, nonatomic) SXTextSource *textSource;
@property (retain, nonatomic) SXTextTangierStorage *textStorage;
@property (weak, nonatomic) id<SXFullscreenCaptionViewDelegate> delegate;
@property (readonly, nonatomic) SXFullscreenCaption *caption;
@property (readonly, nonatomic) unsigned long long viewIndex;
@property (readonly, nonatomic) int expansionMode;
@property (readonly, nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_applyStyle:(id)a0 toStorage:(id)a1;
+ (id)_overridePropertiesWithComponentStyle:(id)a0 storage:(id)a1;

- (void)dealloc;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)handleTapGestureRecognizer:(id)a0;
- (void)createBackgroundView;
- (void)createScrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })determineFrameInSuperview:(id)a0;
- (BOOL)forceFullExpandsionMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithSuperview:(id)a0 size:(struct CGSize { double x0; double x1; })a1 forExpansionMode:(int)a2;
- (void)handleSwipeGestureRecognizer:(id)a0;
- (id)initWithTextSourceFactory:(id)a0 actionHandler:(id)a1;
- (void)initializeTangier;
- (double)marginForTextLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })positionForTextLayout:(id)a0;
- (void)renderCaptionInTangier;
- (void)setExpansionMode:(int)a0 animated:(BOOL)a1;
- (void)setupGestureRecognizers;
- (void)updateFrameAnimated:(BOOL)a0;
- (void)updateWithCaption:(id)a0 forViewIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (double)widthForTextLayout:(id)a0;

@end
