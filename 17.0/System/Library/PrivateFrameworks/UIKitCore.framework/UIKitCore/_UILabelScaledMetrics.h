@class NSAttributedString, _UILabelConfiguration;

@interface _UILabelScaledMetrics : NSObject {
    struct CGSize { double width; double height; } _sourceSize;
    struct CGSize { double width; double height; } _scaledSize;
    double _actualScaleFactor;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    long long _measuredNumberOfLines;
    NSAttributedString *_scaledAttributedText;
    struct CGSize { double width; double height; } _unscaledAndPossiblyTooLargeSize;
    double _scaledFirstBaselineOffset;
    struct { unsigned char calculated : 1; } _scaledMetricsFlags;
    _UILabelConfiguration *_configuration;
    _UILabelScaledMetrics *_associatedScaledMetrics;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _totalBounds;
}

- (id)description;
- (void).cxx_destruct;
- (void)_calculateIfNecessary;
- (void)_calculateIfNecessaryWithAssociatedMetrics;
- (void)_calculateIfNecessaryWithConfiguration;

@end
