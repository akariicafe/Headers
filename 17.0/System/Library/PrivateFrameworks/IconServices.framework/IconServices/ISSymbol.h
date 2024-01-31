@interface ISSymbol : IFSymbol

+ (id)symbolForURL:(id)a0;
+ (id)_generateVariantKeyFromOptions:(unsigned long long)a0;
+ (id)symbolForTypeIdentifier:(id)a0 error:(id *)a1;
+ (id)symbolForType:(id)a0;
+ (id)symbolForTypeIdentifier:(id)a0 withResolutionStrategy:(long long)a1 variantOptions:(unsigned long long)a2 error:(id *)a3;

@end
