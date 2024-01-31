@class NSString, NSArray, HKUIMetricColors, UIImage, NSDictionary;

@interface WDMedicalRecordCategory : NSObject <NSCopying>

@property (nonatomic) long long categoryType;
@property (retain, nonatomic) HKUIMetricColors *categoryMetricColors;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayImageName;
@property (retain, nonatomic) UIImage *displayImage;
@property (copy, nonatomic) NSArray *sampleTypes;
@property (copy, nonatomic) NSDictionary *additionalPredicatesForCategory;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
