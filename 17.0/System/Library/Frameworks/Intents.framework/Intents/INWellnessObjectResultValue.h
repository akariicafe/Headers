@class NSString, NSArray, INDateComponentsRange;

@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INDateComponentsRange *recordDate;
@property (readonly, copy, nonatomic) NSString *unit;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) long long resultType;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordDate:(id)a0 unit:(id)a1 values:(id)a2 resultType:(long long)a3;

@end
