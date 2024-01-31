@class NSString, PPNamedEntityRecord, NSSet;

@interface PPNamedEntity : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clusterIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSString *dynamicCategory;
@property (readonly, nonatomic) NSString *bestLanguage;
@property (readonly, nonatomic) PPNamedEntityRecord *mostRelevantRecord;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)describeCategory:(unsigned long long)a0;
+ (unsigned long long)categoryForDescription:(id)a0;
+ (id)clusterIdentifierFromName:(id)a0;

- (unsigned long long)hash;
- (id)initWithName:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 language:(id)a3 mostRelevantRecord:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToNamedEntity:(id)a0;
- (id)initWithName:(id)a0 category:(unsigned long long)a1 language:(id)a2;
- (id)initWithName:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 language:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)featureValueForName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
