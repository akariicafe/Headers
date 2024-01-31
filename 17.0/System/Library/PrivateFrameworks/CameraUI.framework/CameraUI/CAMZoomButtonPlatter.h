@class CAMZoomButton, NSArray, UIImageView, NSMutableArray;

@interface CAMZoomButtonPlatter : UIView

@property (readonly, nonatomic) UIImageView *_platterBackgroundView;
@property (readonly, nonatomic) NSMutableArray *_allButtons;
@property (nonatomic, setter=_setFocalLengthFlashID:) unsigned long long _focalLengthFlashID;
@property (readonly, nonatomic) unsigned long long buttonCount;
@property (nonatomic) double zoomFactor;
@property (readonly, nonatomic) CAMZoomButton *zoomFactorButton;
@property (copy, nonatomic) NSArray *zoomPoints;
@property (readonly, nonatomic) NSArray *zoomFactors;
@property (readonly, nonatomic) NSArray *buttons;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) long long buttonAccessoryState;
@property (nonatomic) long long preferredCustomLens;
@property (nonatomic) long long orientation;

- (void)_updateButtonAccessoryAnimated:(BOOL)a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateForContentSize;
- (void)layoutSubviews;
- (void)setCollapsed:(BOOL)a0 animated:(BOOL)a1;
- (void)_cancelFocalLengthFlash;
- (id)_createPlatterImageForContentSize:(id)a0;
- (id)_createZoomButton;
- (void)_flashFocalLengthIfNeeded;
- (id)_indexesForChanges:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicContentSizeForButtonCount:(unsigned long long)a0;
- (void)_updateButtonsAnimated:(BOOL)a0;
- (double)_zoomFactorForButton:(id)a0 zoomPoint:(id)a1 isZoomFactorButton:(BOOL)a2;
- (id)baseZoomPointForButton:(id)a0;
- (double)defaultZoomFactorForButton:(id)a0;
- (id)nearestZoomButtonForTouch:(id)a0;
- (void)setButtonAccessoryState:(long long)a0 animated:(BOOL)a1;
- (void)setZoomFactor:(double)a0 allowFlashingSubstate:(BOOL)a1 animated:(BOOL)a2;
- (void)setZoomPoints:(id)a0 animated:(BOOL)a1;

@end
