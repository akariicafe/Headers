@class PRPosterColor, PRTimeFontConfiguration;

@interface PRMutableEditingLookProperties : PREditingLookProperties

@property (copy, nonatomic) PRTimeFontConfiguration *timeFontConfiguration;
@property (copy, nonatomic) PRPosterColor *titlePosterColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeFontConfiguration:(id)a0 titlePosterColor:(id)a1;

@end
