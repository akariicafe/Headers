@class EKCurrentTimeMarkerView, UIVisualEffect, NSString, UIView, UIImageView, NSMutableDictionary, NSMutableArray, UIColor;

@interface EKDayGridView : UIView <EKUITintColorUpdateDelegate, EKCurrentTimeMarkerViewUpdating> {
    double _timeInset;
    double _hourHeight;
    double _timeWidth;
    unsigned char _leftBorder : 1;
    unsigned char _rightBorder : 1;
    int _selected;
    double _fixedDayWidth;
    long long _orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
    UIColor *_backgroundColor;
    UIView *_leftBorderView;
    NSMutableArray *_middleBorderViews;
    UIView *_rightBorderView;
    NSMutableArray *_gridPatternViews;
    unsigned long long _daysToDisplay;
    UIImageView *_timeDot;
    UIView *_highlightedDayBackground;
    UIView *_fadingHighlightedDayBackground;
    UIView *_gridContainerView;
    NSMutableDictionary *_gridParentViews;
    double _cachedWidthForOffMainThreadWork;
    long long _sizeClass;
    BOOL _needsLayoutInWindow;
}

@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL showsRightBorder;
@property (nonatomic) BOOL rightBorderInsetsOccurrences;
@property (nonatomic) BOOL showsTimeLine;
@property (nonatomic) BOOL showsTimeMarker;
@property (nonatomic) BOOL animatesTimeMarker;
@property (nonatomic) long long timeMarkerDotDay;
@property (nonatomic) double fixedDayWidth;
@property (nonatomic) double eventHorizontalInset;
@property (nonatomic) double hoursToPadTop;
@property (nonatomic) double hoursToPadBottom;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) BOOL usesVibrantGridDrawing;
@property (nonatomic) long long highlightedDayIndex;
@property (readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker;
@property (readonly, nonatomic) double timeWidth;
@property (readonly, nonatomic) double timeInset;
@property (readonly, nonatomic) double topPadding;
@property (readonly, nonatomic) double hourHeight;
@property (readonly, nonatomic) double widthForOccurrences;
@property (retain, nonatomic) UIVisualEffect *gridVisualEffect;
@property (retain, nonatomic) UIView *occurrenceContainerView;
@property (nonatomic) double gridHeightScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cacheBackgroundImage:(id)a0 forKey:(id)a1;
+ (id)cachedBackgroundImageForKey:(id)a0;

- (long long)_sizeClass;
- (void)_updateTimeMarker;
- (double)_dayWidth;
- (void)setOrientation:(long long)a0;
- (void)updateMarkerPosition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1 backgroundColor:(id)a2 opaque:(BOOL)a3 numberOfDaysToDisplay:(unsigned long long)a4;
- (double)positionOfSecond:(long long)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_generateGridImage;
- (void)updateHourHeight;
- (void)viewTintColorDidChangeForView:(id)a0 toColor:(id)a1;
- (void).cxx_destruct;
- (void)_layoutHighlight;
- (int)secondAtPosition:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForStartSeconds:(long long)a0 endSeconds:(long long)a1;
- (double)bottomPadding;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)timeDotImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
