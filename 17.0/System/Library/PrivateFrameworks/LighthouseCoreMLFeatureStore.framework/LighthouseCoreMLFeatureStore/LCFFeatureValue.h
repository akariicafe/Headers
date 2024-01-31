@class NSString, NSNumber, NSArray;

@interface LCFFeatureValue : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *valueInString;
@property (readonly, nonatomic) NSNumber *intValue;
@property (readonly, nonatomic) NSNumber *doubleValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSNumber *boolValue;
@property (readonly, nonatomic) NSNumber *timeBucketValue;
@property (readonly, nonatomic) NSArray *doubleArray;

- (id)initEmpty;
- (void).cxx_destruct;
- (id)initWithDoubleArray:(id)a0;
- (id)initWithBoolValue:(id)a0;
- (id)initWithStringValue:(id)a0;
- (id)initWithDoubleValue:(id)a0;
- (id)getTypeDBString;
- (id)initWithIntValue:(id)a0;
- (id)initWithTimeBucketValue:(id)a0;
- (BOOL)isNullValue;

@end
