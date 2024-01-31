@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying> {
    union { unsigned int value; struct { unsigned char leadingMayBeHidden : 1; unsigned char trailingMayBeHidden : 1; unsigned char supplementaryMayBeHidden : 1; unsigned char allowMixedSideBySideAndOverlay : 1; unsigned char allowTotalWidthGreaterThanParent : 1; unsigned char forceOverlay : 1; unsigned char leadingBorderWidthIsInPixels : 1; unsigned char trailingBorderWidthIsInPixels : 1; unsigned char shouldFadeStaticNavBarButton : 1; unsigned char supplementaryAdoptsPrimaryBackgroundStyle : 1; unsigned int reserved : 20; } flags; } _configurationFlags;
}

@property (nonatomic, setter=_setRawLeadingBorderWidth:) double _rawLeadingBorderWidth;
@property (nonatomic, setter=_setLeadingBorderWidthIsInPixels:) BOOL _leadingBorderWidthIsInPixels;
@property (nonatomic, setter=_setRawTrailingBorderWidth:) double _rawTrailingBorderWidth;
@property (nonatomic, setter=_setTrailingBorderWidthIsInPixels:) BOOL _trailingBorderWidthIsInPixels;
@property (nonatomic, setter=_setLeadingBackgroundStyle:) long long _leadingBackgroundStyle;
@property (nonatomic, setter=_setTrailingBackgroundStyle:) long long _trailingBackgroundStyle;
@property (nonatomic, setter=_setSupplementaryAdoptsPrimaryBackgroundStyle:) BOOL _supplementaryAdoptsPrimaryBackgroundStyle;
@property (nonatomic) double minimumMainWidthFraction;
@property (nonatomic) double minimumMainWidthFractionForSecondColumn;
@property (nonatomic) double maximumMainWidth;
@property (nonatomic) long long supplementaryEdge;
@property (nonatomic) BOOL leadingMayBeHidden;
@property (nonatomic) BOOL trailingMayBeHidden;
@property (nonatomic) BOOL supplementaryMayBeHidden;
@property (nonatomic) double rubberBandExtension;
@property (copy, nonatomic) NSArray *leadingWidths;
@property (copy, nonatomic) NSArray *trailingWidths;
@property (copy, nonatomic) NSArray *supplementaryWidths;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL allowMixedSideBySideAndOverlay;
@property (nonatomic) BOOL allowTotalWidthGreaterThanParent;
@property (nonatomic) BOOL forceOverlay;
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;

- (void)setLeadingBorderWidthInPixels:(double)a0;
- (id)init;
- (unsigned long long)hash;
- (double)trailingBorderWidthForScale:(double)a0;
- (id)description;
- (void)setTrailingBorderWidthInPixels:(double)a0;
- (void).cxx_destruct;
- (double)leadingBorderWidthForScale:(double)a0;
- (void)setLeadingBorderWidthInPoints:(double)a0;
- (BOOL)isEqual:(id)a0;
- (void)setTrailingBorderWidthInPoints:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
