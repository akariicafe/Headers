@class _MKScaleUnitsView, MKMapView, UIView, NSString, NSNumberFormatter, NSMutableDictionary, NSMutableArray, UIVisualEffectView, NSNumber, UIColor;

@interface MKScaleView : UIView {
    double _distanceInMeters;
    BOOL _useMetric;
    BOOL _useYardsForShortDistances;
    NSNumberFormatter *_floatNumberFormatter;
    double _magicNumbers[3];
    UIColor *_borderColorRegular;
    UIColor *_borderColorSatellite;
    NSMutableArray *_segments;
    UIVisualEffectView *_blurredSegment;
    _MKScaleUnitsView *_unitsView;
    long long _oldNumberOfSegments;
    UIView *_displayedOutline;
    UIView *_displayedWhiteOutline;
    double _segmentLengthInPixels;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    NSMutableDictionary *_formattedNumberCache;
    NSString *_feetAbbreviation;
    NSString *_yardAbbreviation;
    NSString *_milesAbbreviation;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    long long _grQuality;
    int _layoutCounter;
    NSNumber *_useLightText;
    double _segmentThickness;
    double _segmentBorderWidth;
    double _legendMarginLeft;
    double _legendMarginBottom;
    double _legendUnitsSpacing;
    double _fontSize;
    double _unitsFrameHeight;
    BOOL _isVisible;
}

@property (nonatomic) BOOL useLightText;
@property (nonatomic) double distanceInMeters;
@property (nonatomic) BOOL usedInternallyByMapView;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long scaleVisibility;
@property (nonatomic) long long legendAlignment;

+ (id)scaleViewWithMapView:(id)a0;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)updateMetrics;
- (void)layoutSubviews;
- (void)_updateVisibility;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setDistanceInMeters:(double)a0;
- (void)_updateStrings;
- (void)_calculateSegments;
- (id)_formattedStringForFloat:(double)a0;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)a0 imperial:(double)a1 useFeet:(BOOL)a2 inMetric:(BOOL)a3 displaysYardsForShortDistances:(BOOL)a4 strings:(id)a5;
- (id)_scaleViewFormattedStringForFloat:(double)a0;
- (id)_scaleViewFormattedStringForInteger:(long long)a0;
- (id)_setupOutlineView;
- (id)_setupSegmentView:(BOOL)a0;
- (void)_traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (id)initWithMapView:(id)a0;
- (void)memoryWarning:(id)a0;
- (void)setUseLightText:(BOOL)a0;
- (void)shouldUpdateScaleNotification:(id)a0;
- (void)updateLocale:(id)a0;
- (BOOL)useLightText;

@end
