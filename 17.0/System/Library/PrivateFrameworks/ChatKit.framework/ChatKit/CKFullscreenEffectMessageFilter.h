@class NSArray, UIColor, CAFilter;

@interface CKFullscreenEffectMessageFilter : NSObject

@property (nonatomic) int type;
@property (nonatomic) int direction;
@property (copy, nonatomic) NSArray *balloonFilters;
@property (copy, nonatomic) NSArray *balloonBackdropFilters;
@property (copy, nonatomic) CAFilter *balloonCompositingFilter;
@property (nonatomic) double balloonAlpha;
@property (nonatomic) double contentAlpha;
@property (copy, nonatomic) CAFilter *textCompositingFilter;
@property (copy, nonatomic) UIColor *textColor;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
