@class FCNewsPersonalizationFeaturePrior;

@interface FCNewsPersonalizationFeaturePriorsConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *baselineFeaturePrior;
@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *generalFeaturePrior;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
