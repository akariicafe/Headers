@interface RBUnmanagedJetsamProperties : RBJetsamProperties

+ (id)new;

- (id)init;
- (int)memoryLimitForCategory:(id)a0 strength:(unsigned char *)a1;
- (BOOL)isValid;

@end
