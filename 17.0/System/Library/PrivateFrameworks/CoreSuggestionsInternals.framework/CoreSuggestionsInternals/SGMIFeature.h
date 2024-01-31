@class NSNumber, NSArray, NSString;

@interface SGMIFeature : NSObject

@property (readonly, nonatomic) long long featureName;
@property (readonly, nonatomic) long long featureType;
@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) int intValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) NSArray *numberArrayValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSArray *stringArrayValue;

+ (id)allFeatureNames;
+ (id)allFeaturePrettyNames;
+ (long long)featureTypeForName:(long long)a0;
+ (id)prettyName:(long long)a0;
+ (id)prettyNamesReverseMapping;
+ (id)submodeledFeatures;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFeatureName:(long long)a0;
- (id)initWithFeatureName:(long long)a0 numberArrayValue:(id)a1;
- (id)initWithFeatureName:(long long)a0 numberValue:(id)a1;
- (id)initWithFeatureName:(long long)a0 stringArrayValue:(id)a1;
- (id)initWithFeatureName:(long long)a0 stringValue:(id)a1;
- (id)stringArrayRepresentation;

@end
