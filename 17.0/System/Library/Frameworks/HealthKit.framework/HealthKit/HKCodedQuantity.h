@class NSString, NSNumber, HKMedicalCoding;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *rawValue;
@property (readonly, copy, nonatomic) NSString *localizedValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, copy, nonatomic) HKMedicalCoding *comparatorCoding;
@property (readonly, copy, nonatomic) HKMedicalCoding *unitCoding;

+ (id)_numberFormatter;
+ (id)codedQuantityWithValue:(id)a0 comparatorCoding:(id)a1 unitCoding:(id)a2;
+ (id)codedQuantityWithValue:(id)a0 unitCoding:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRawValue:(id)a0 comparatorCoding:(id)a1 unitCoding:(id)a2;
- (id)quantityRepresentationWithUCUMConverter:(id)a0 error:(id *)a1;

@end
