@interface CHSEquivalentBundleIdentifierResolver : NSObject <CHSEquivalentBundleIdentifierResolving> {
    void /* unknown type, empty encoding */ categoriesPrimitives;
}

+ (id)defaultResolver;

- (id)init;
- (void).cxx_destruct;
- (id)equivalentBundleIdentifiersForBundleIdentifier:(id)a0;
- (id)initWithCategoriesPrimitives:(id)a0;

@end
