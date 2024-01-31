@class NSDecimalNumber, NSString, NSDate;

@interface FHFeatureInsight : NSObject <FHInsightProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *spendAmount;
@property (copy, nonatomic) NSDecimalNumber *averageAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long detectionType;
@property (nonatomic) long long direction;
@property (nonatomic) long long window;
@property (nonatomic) unsigned long long windowReference;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
