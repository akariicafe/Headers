@class NSString, NSDictionary;

@interface FHRealtimeFeaturesResponse : NSObject

@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) unsigned long long transactionDateAtZerothHour;
@property (nonatomic) BOOL isInternationalSpend;
@property (nonatomic) BOOL isTapToPay;
@property (nonatomic) unsigned long long merchantCategory;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *merchantDisplayName;
@property (copy, nonatomic) NSDictionary *smartCompoundFeatures;
@property (nonatomic) unsigned long long repeatingPatternClass;

- (id)description;
- (void).cxx_destruct;
- (id)smartCompoundFeaturesDictionaryForJson;

@end
