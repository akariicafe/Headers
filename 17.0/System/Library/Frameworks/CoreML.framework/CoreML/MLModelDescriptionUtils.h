@interface MLModelDescriptionUtils : NSObject

+ (void *)getDictionaryFeatureTypeFromConstraint:(id)a0 error:(id *)a1;
+ (BOOL)validateAllFeatureDescriptions:(id)a0 hasAnyFeatureTypeIn:(id)a1 minimalCount:(unsigned long long)a2 maximumCount:(unsigned long long)a3 debugLabel:(id)a4 error:(id *)a5;
+ (void)copyFeatureDescriptionFrom:(id)a0 to:(void *)a1 error:(id *)a2;
+ (void *)getArrayFeatureTypeFromConstraint:(id)a0;
+ (void *)createMetaData:(id)a0;
+ (void *)getImageFeatureTypeFromConstraint:(id)a0;
+ (void *)createModelDescription:(id)a0 error:(id *)a1;
+ (BOOL)saveModelDescription:(id)a0 toSpecification:(void *)a1 error:(id *)a2;
+ (void *)createFeatureTypeFromFeatureDescription:(id)a0 error:(id *)a1;
+ (void *)getSequenceFeatureTypeFromConstraint:(id)a0 error:(id *)a1;

@end
