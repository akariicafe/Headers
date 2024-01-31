@class NSMutableDictionary, NSData, ML3DatabaseConnection, NSMutableArray, ML3MusicLibrary;

@interface ML3SortMap : NSObject {
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
    NSMutableDictionary *_nameOrders;
    NSMutableArray *_entries;
    NSData *_minSortKey;
    NSData *_maxSortKey;
    long long _smallestNameDelta;
    BOOL _preloadNames;
}

- (BOOL)commitUpdates;
- (void).cxx_destruct;
- (id)_sortKeyString:(id)a0;
- (BOOL)_insertSortedNameEntriesIntoSortMap:(id)a0;
- (long long)_maxNameOrderForSortMapEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (id)_maxSortKeyForEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (long long)_minNameOrderForSortMapEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (id)_minSortKeyForEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (long long)_sortKeyDistance:(id)a0 sortKey2:(id)a1 offset:(unsigned long long)a2;
- (id)_sortedNameEntriesToInsertForNames:(id)a0;
- (BOOL)attemptInsertStringsIntoSortMap:(id)a0;
- (BOOL)commitFailedInsertedStrings:(id)a0;
- (id)initWithConnection:(id)a0 library:(id)a1 preloadNames:(BOOL)a2;
- (BOOL)insertStringsIntoSortMap:(id)a0 didReSortMap:(BOOL *)a1;
- (BOOL)loadExistingSortedEntries;
- (id)nameOrders;

@end
