@interface PKPaymentSetupProductsSectionMainFactory : NSObject

+ (void)generateSectionsWithSearchFilter:(id)a0 forItems:(id)a1 withContext:(id)a2 outSectionIdentifierToItemIdentifierMapping:(id *)a3 outOrderedSectionIdentifiers:(id *)a4;
+ (id)_buildSectionIdentifierToItemIdentifierMappingFromSections:(id)a0;
+ (void)generateSectionsWithDefaultSortingForItems:(id)a0 withContext:(id)a1 outSectionIdentifierToItemIdentifierMapping:(id *)a2 outOrderedSectionIdentifiers:(id *)a3;

@end
