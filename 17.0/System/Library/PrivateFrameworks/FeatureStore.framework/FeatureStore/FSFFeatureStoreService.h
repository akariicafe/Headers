@interface FSFFeatureStoreService : NSObject

+ (void)insertCodingWithInteractionId:(id)a0 item:(id)a1;
+ (void)insertPBCodableWithInteractionId:(id)a0 item:(id)a1;
+ (id)interactionIdForInjection;
+ (id)retrieveCodingWithInteractionId:(id)a0 klass:(Class)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
