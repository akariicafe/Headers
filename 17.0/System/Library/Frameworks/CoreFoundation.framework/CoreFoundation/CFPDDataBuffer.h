@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromPropertyList:(void *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;

- (id)copyXPCData;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (unsigned long long)length;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (void *)bytes;
- (struct __CFData { } *)copyCFData;
- (BOOL)validatePlist;
- (BOOL)beginAccessing;
- (BOOL)purgable;
- (void)endAccessing;

@end
