@class NSMutableDictionary;

@interface VNRequestSpecifierEquivalenciesRegistrar : NSObject <VNRequestSpecifierEquivalenciesRegistrar> {
    NSMutableDictionary *_equivalenciesLookup;
}

- (id)init;
- (void).cxx_destruct;
- (id)equivalenciesForRequestSpecifier:(id)a0;
- (BOOL)isRequestSpecifier:(id)a0 equivalentToRequestSpecifier:(id)a1;
- (BOOL)registerRequestClass:(Class)a0 revision:(unsigned long long)a1 equivalencyToRevision:(unsigned long long)a2 error:(id *)a3;
- (BOOL)registerRequestClassName:(id)a0 revision:(unsigned long long)a1 equivalencyToRequestClassName:(id)a2 revision:(unsigned long long)a3 error:(id *)a4;
- (BOOL)registerRequestClassName:(id)a0 revision:(unsigned long long)a1 equivalencyToRevision:(unsigned long long)a2 error:(id *)a3;
- (BOOL)registerRequestSpecifier:(id)a0 equivalencyToRequestSpecifier:(id)a1 error:(id *)a2;

@end
