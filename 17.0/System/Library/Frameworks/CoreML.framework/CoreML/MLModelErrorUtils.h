@interface MLModelErrorUtils : NSObject

+ (id)modelDecryptionErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 format:(id)a2 args:(char *)a3;
+ (id)errorWithCode:(long long)a0 format:(id)a1;
+ (id)featureTypeErrorWithFormat:(id)a0;
+ (id)errorWithCode:(long long)a0 format:(id)a1 args:(char *)a2;
+ (id)programParsingAtLoadErrorWithReason:(int)a0 format:(id)a1;
+ (id)parameterErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)IOErrorWithFormat:(id)a0;
+ (id)modelDecryptionKeyFetchErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)modelEncryptionErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)errorWithIntegerCode:(long long)a0 underlyingError:(id)a1 format:(id)a2 args:(char *)a3;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 format:(id)a2;
+ (id)privateErrorWithCode:(long long)a0 underlyingError:(id)a1 format:(id)a2 args:(char *)a3;
+ (id)programEvaluationErrorWithUnderlyingError:(id)a0 format:(id)a1;
+ (id)programValidationAtLoadErrorWithReason:(int)a0 format:(id)a1;
+ (id)customLayerErrorWithUnderlyingError:(id)a0 withFormat:(id)a1;
+ (id)genericErrorWithFormat:(id)a0;
+ (id)updateErrorWithFormat:(id)a0;

@end
