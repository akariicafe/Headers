@class NSString;

@interface NLParameter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long parameterType;
@property (readonly, nonatomic) double minimumValue;
@property (readonly, nonatomic) double maximumValue;

+ (id)parameterWithName:(id)a0 type:(long long)a1 minimumValue:(double)a2 maximumValue:(double)a3;

- (id)_dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_shortDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_hyperTuneDictionary;
- (id)_initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 type:(long long)a1 minimumValue:(double)a2 maximumValue:(double)a3;

@end
