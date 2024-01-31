@class NSString, NSDictionary, NSSet, NSDate;

@interface LCFCoreMLFeatureProvider : NSObject <MLFeatureProvider>

@property (readonly, nonatomic) NSString *featureStoreKey;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDictionary *featureValues;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)fromMLProvider:(id)a0;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)init:(id)a0 timestamp:(id)a1 featureValues:(id)a2;

@end
