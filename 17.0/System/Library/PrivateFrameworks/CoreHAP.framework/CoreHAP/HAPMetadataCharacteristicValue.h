@class NSNumber, NSArray;

@interface HAPMetadataCharacteristicValue : HMFObject

@property (retain, nonatomic) NSNumber *minValue;
@property (retain, nonatomic) NSNumber *maxValue;
@property (retain, nonatomic) NSNumber *stepValue;
@property (retain, nonatomic) NSNumber *minLength;
@property (retain, nonatomic) NSNumber *maxLength;
@property (readonly, nonatomic) NSArray *validValues;

+ (id)initWithDictionary:(id)a0;

- (id)generateDictionary;
- (void)dump;
- (id)initWithMinLength:(id)a0 maxLength:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1 stepValue:(id)a2 validValues:(id)a3;

@end
