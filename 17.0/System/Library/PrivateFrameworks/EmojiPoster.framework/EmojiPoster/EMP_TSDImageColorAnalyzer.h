@class UIColor, NSArray, NSOrderedSet, NSMutableOrderedSet;

@interface EMP_TSDImageColorAnalyzer : NSObject {
    void *_imageAnalyzer;
    NSMutableOrderedSet *_interestingColors;
}

@property (readonly, nonatomic) NSArray *dominantColors;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSOrderedSet *interestingColors;

- (void)dealloc;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)filterInterestingColorsUsingBlock:(id /* block */)a0;
- (void)p_prepareInterestingColors;
- (id)textColorForBackgroundColor:(id)a0;
- (id)textShadowColorForTextColor:(id)a0 backgroundColor:(id)a1;

@end
