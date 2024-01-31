@interface PXCollectionSortOrderMenuBuilder : NSObject

+ (void)_enumeratePossibleSortOrdersUsingBlock:(id /* block */)a0;
+ (id)_localizedTitleForSortOrder:(long long)a0;
+ (unsigned int)_sortKeyFromSortOrder:(long long)a0;
+ (long long)_sortOrderFromCollection:(id)a0 sortKey:(unsigned int)a1;
+ (BOOL)_supportsAscendingDescending:(unsigned int)a0;
+ (BOOL)_supportsFetchSortOrder:(long long)a0 collection:(id)a1;
+ (void)_updateSortOrderWithSortKey:(unsigned int)a0 ascending:(BOOL)a1 forCollection:(id)a2;
+ (id)sortOrderMenuActionsForCollection:(id)a0;
+ (id)sortOrderMenuConfigurationsForCollection:(id)a0;

@end
