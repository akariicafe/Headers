@interface PICompositionSerializer : NSObject

+ (void)initialize;
+ (BOOL)canInterpretDataWithFormatIdentifier:(id)a0 formatVersion:(id)a1;
+ (id)deserializeCompositionFromAdjustments:(id)a0 metadata:(id)a1 formatIdentifier:(id)a2 formatVersion:(id)a3 error:(out id *)a4;
+ (id)deserializeCompositionFromData:(id)a0 formatIdentifier:(id)a1 formatVersion:(id)a2 error:(out id *)a3;
+ (id)deserializeDictionaryFromData:(id)a0 error:(out id *)a1;
+ (id)serializeComposition:(id)a0 versionInfo:(id)a1 serializerMetadata:(id)a2 error:(out id *)a3;
+ (id)serializeDictionary:(id)a0 error:(out id *)a1;
+ (BOOL)_addDummySourceToCompositionIfNeeded:(id)a0;
+ (void)_sanitizeComposition:(id)a0;
+ (id)_serializeComposition:(id)a0 versionInfo:(id)a1 needsGeometry:(BOOL)a2 error:(out id *)a3;
+ (BOOL)_validateValueTypesForKeys:(id)a0 requiredKeys:(id)a1 inDictionary:(id)a2 error:(out id *)a3;
+ (id)adjustmentInformationForComposition:(id)a0 error:(out id *)a1;
+ (id)adjustmentInformationForComposition:(id)a0 needsGeometry:(BOOL)a1 error:(out id *)a2;
+ (void)disableApertureEffects:(BOOL)a0;
+ (id)serializeComposition:(id)a0 versionInfo:(id)a1 error:(out id *)a2;
+ (BOOL)validateAdjustmentsEnvelope:(id)a0 error:(out id *)a1;
+ (BOOL)validateCompositionWithMissingSource:(id)a0 error:(out id *)a1;

@end
