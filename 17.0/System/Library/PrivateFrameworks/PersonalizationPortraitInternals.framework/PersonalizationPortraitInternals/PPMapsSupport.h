@interface PPMapsSupport : NSObject

+ (BOOL)harvestMapItem:(id)a0 documentIdentifier:(id)a1 groupIdentifier:(id)a2 includingPostalAddress:(BOOL)a3 localNamedEntityStore:(id)a4 localLocationStore:(id)a5 error:(id *)a6;
+ (void)importMapsDataWithCollectionQuery:(id)a0 localNamedEntityStore:(id)a1 localLocationStore:(id)a2 shouldContinueBlock:(id /* block */)a3;
+ (void)importMapsDataWithFavoriteQuery:(id)a0 localNamedEntityStore:(id)a1 localLocationStore:(id)a2 shouldContinueBlock:(id /* block */)a3;
+ (void)importMapsDataWithShouldContinueBlock:(id /* block */)a0;

@end
