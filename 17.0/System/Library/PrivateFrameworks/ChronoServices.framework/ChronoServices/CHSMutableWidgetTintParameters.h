@class BSColor;

@interface CHSMutableWidgetTintParameters : CHSWidgetTintParameters

@property (nonatomic) long long filterStyle;
@property (nonatomic) long long fallbackFilterStyle;
@property (retain, nonatomic) BSColor *primaryTintColor;
@property (retain, nonatomic) BSColor *secondaryTintColor;
@property (nonatomic) double fraction;
@property (nonatomic) BOOL accentedAlternateBackground;

- (void)setPrimaryTintColor:(id)a0;
- (void)setSecondaryTintColor:(id)a0;
- (void)setAccentedAlternateBackground:(BOOL)a0;
- (void)setFilterStyle:(long long)a0;
- (void)setFallbackFilterStyle:(long long)a0;
- (void)setFraction:(double)a0;

@end
