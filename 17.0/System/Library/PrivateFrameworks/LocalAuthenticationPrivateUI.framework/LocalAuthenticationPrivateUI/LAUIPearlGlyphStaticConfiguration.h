@interface LAUIPearlGlyphStaticConfiguration : NSObject

@property (nonatomic) long long initialStyle;
@property (nonatomic) long long pathStyle;
@property (nonatomic) double lineThicknessScale;
@property (nonatomic) double checkmarkThicknessScale;

+ (id)createSystemApertureConfiguration;
+ (id)createDefaultConfiguration;

- (id)init;

@end
