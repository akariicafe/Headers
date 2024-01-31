@class MLModel, NSString;

@interface CRLineWrappingClassifier : NSObject

@property (readonly, nonatomic) MLModel *model;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) unsigned long long featureCount;
@property (readonly, nonatomic) NSString *modelLocale;

+ (BOOL)localeIsSupported:(id)a0;
+ (id)localeToModelMap;
+ (id)modelLocaleForLocale:(id)a0;
+ (id)urlOfModelForLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;

@end
