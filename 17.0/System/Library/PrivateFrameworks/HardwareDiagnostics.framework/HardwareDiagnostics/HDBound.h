@class NSMeasurement;

@interface HDBound : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMeasurement *value;
@property (nonatomic) BOOL open;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToBound:(id)a0;
- (id)initWithValue:(id)a0 open:(BOOL)a1;

@end
