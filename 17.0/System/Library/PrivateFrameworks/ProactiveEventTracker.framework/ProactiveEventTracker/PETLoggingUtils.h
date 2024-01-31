@interface PETLoggingUtils : NSObject

+ (id)keyStringForStringifiedPairs:(id)a0;
+ (id)messageKeyStringForKey:(id)a0;
+ (id)keyStringForEvent:(id)a0 featureId:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
+ (void)_pushToBuffer:(id)a0 keyStringForStringifiedPairs:(id)a1;
+ (id)domainStringForEvent:(id)a0 featureId:(id)a1;

@end
