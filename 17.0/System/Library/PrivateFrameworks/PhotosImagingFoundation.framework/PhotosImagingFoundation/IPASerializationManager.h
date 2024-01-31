@interface IPASerializationManager : NSObject

+ (id)serialize:(id)a0 error:(id *)a1;
+ (void)initialize;
+ (id)deserialize:(id)a0 originator:(id)a1 format:(id)a2 formatVersion:(id)a3 error:(id *)a4;
+ (id)_serializerForFormat:(id)a0 formatVersion:(id)a1 error:(id *)a2;
+ (char)adjustmentTypeForFormat:(id)a0 formatVersion:(id)a1;
+ (char)debug_adjustmentTypeFromEnvelopeDictionary:(id)a0;
+ (id)debug_deserializeEnvelopeDictionary:(id)a0 error:(id *)a1;
+ (id)debug_serializeEnvelope:(id)a0 error:(id *)a1;
+ (id)formatForAdjustmentStack:(id)a0;
+ (id)serialize:(id)a0 format:(id)a1 formatVersion:(id)a2 error:(id *)a3;
+ (id)serializeWithCurrentDefaultFormat:(id)a0 error:(id *)a1;
+ (id)serializeWithCurrentDefaultFormat:(id)a0 format:(id *)a1 formatVersion:(id *)a2 error:(id *)a3;
+ (id)serializerMap;

@end
