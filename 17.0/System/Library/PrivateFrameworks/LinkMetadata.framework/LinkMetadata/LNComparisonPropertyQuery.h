@class NSString, NSNumber, LNValue;

@interface LNComparisonPropertyQuery : LNPropertyQuery

@property (readonly, copy, nonatomic) NSString *propertyIdentifier;
@property (readonly, copy, nonatomic) NSNumber *propertyIndex;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyIdentifier:(id)a0 value:(id)a1 type:(unsigned long long)a2;
- (id)initWithPropertyIndex:(id)a0 value:(id)a1 type:(unsigned long long)a2;

@end
