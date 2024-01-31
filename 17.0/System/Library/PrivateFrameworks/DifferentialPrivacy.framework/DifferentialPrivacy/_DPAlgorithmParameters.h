@class NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (id)parametersFromFile:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)allAlgorithmNames;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
