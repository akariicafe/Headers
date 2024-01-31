@class NSArray, UIColor, CAFilter;

@interface IMFullscreenEffectFilter : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long direction;
@property (copy, nonatomic) NSArray *balloonFilters;
@property (copy, nonatomic) NSArray *balloonBackdropFilters;
@property (copy, nonatomic) CAFilter *balloonCompositingFilter;
@property (nonatomic) double balloonAlpha;
@property (nonatomic) double contentAlpha;
@property (copy, nonatomic) CAFilter *textCompositingFilter;
@property (copy, nonatomic) UIColor *textColor;

- (id)init;
- (void).cxx_destruct;

@end
