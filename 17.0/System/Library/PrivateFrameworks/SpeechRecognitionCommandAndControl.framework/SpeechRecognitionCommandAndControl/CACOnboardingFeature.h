@class NSString;

@interface CACOnboardingFeature : NSObject

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *helperText;
@property (retain, nonatomic) NSString *imageBundleName;

+ (id)featureWithTitleText:(id)a0 helperText:(id)a1;
+ (id)featureWithTitleText:(id)a0 helperText:(id)a1 imageBundleName:(id)a2;

- (void).cxx_destruct;
- (id)initWithTitleText:(id)a0 helperText:(id)a1 imageBundleName:(id)a2;

@end
