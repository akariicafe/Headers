@class NSString;

@interface MLCustomModelLoader : NSObject <MLModelSpecificationLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)customModelWithName:(id)a0 modelDescription:(id)a1 modelConfiguration:(id)a2 parameterDictionary:(id)a3 error:(id *)a4;
+ (id)parametersFromCustomModelSpec:(void *)a0 error:(id *)a1;


@end
