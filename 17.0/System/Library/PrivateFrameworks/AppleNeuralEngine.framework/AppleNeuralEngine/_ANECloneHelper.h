@interface _ANECloneHelper : NSObject

+ (id)cloneIfWritable:(id)a0 isEncryptedModel:(BOOL)a1 cloneDirectory:(id)a2;
+ (BOOL)shouldSkipCloneFor:(id)a0 isEncryptedModel:(BOOL)a1;

@end
