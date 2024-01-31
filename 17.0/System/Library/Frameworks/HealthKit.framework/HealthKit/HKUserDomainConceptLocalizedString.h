@class NSString;

@interface HKUserDomainConceptLocalizedString : HKUserDomainConceptProperty

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *locale;

+ (BOOL)supportsSecureCoding;
+ (id)_propertiesByLocale:(id)a0;
+ (id)mergeListsOfPropertiesWithType:(long long)a0 intoListOfProperties:(id)a1 fromListOfProperties:(id)a2 options:(unsigned long long)a3;
+ (id)nullPropertyWithType:(long long)a0 locale:(id)a1 version:(long long)a2;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueDescription;
- (id)initWithType:(long long)a0 stringValue:(id)a1 locale:(id)a2 version:(long long)a3;
- (id)initWithType:(long long)a0 stringValue:(id)a1 locale:(id)a2 version:(long long)a3 timestamp:(double)a4;
- (id)initWithType:(long long)a0 stringValue:(id)a1 locale:(id)a2 version:(long long)a3 timestamp:(double)a4 deleted:(BOOL)a5;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 deleted:(BOOL)a3;

@end
