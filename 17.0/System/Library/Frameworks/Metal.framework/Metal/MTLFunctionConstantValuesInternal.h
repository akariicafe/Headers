@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {
    void *_constantStorage;
}

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (void)dealloc;
- (const void *)constantValueWithFunctionConstant:(id)a0;
- (void)setConstantValues:(const void *)a0 type:(unsigned long long)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)newNamedConstantArray;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 withName:(id)a2;
- (void *)serializedConstantDataForFunction:(id)a0 dataSize:(unsigned long long *)a1 errorMessage:(id *)a2;
- (id)newConstantScriptForFunction:(id)a0 name:(id)a1 specializedName:(id)a2 errorMessage:(id *)a3;
- (id)description;
- (id)newIndexedConstantArray;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
