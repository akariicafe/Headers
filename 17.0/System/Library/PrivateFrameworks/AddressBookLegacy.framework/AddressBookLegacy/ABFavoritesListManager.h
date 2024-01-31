@class NSMutableArray;

@interface ABFavoritesListManager : NSObject {
    void *_addressBook;
    NSMutableArray *_list;
    struct __CFDictionary { } *_uidToEntry;
    struct { unsigned char dirty : 1; unsigned char postCount : 1; unsigned char needsReload : 1; unsigned int unused : 29; } _flags;
}

+ (id)sharedInstance;
+ (id)sharedInstanceWithAddressBook:(void *)a0;

- (id)entries;
- (BOOL)isFull;
- (BOOL)_isValueForEntry:(id)a0 equalToValue:(id)a1;
- (void)moveEntryAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)removeAllEntries;
- (void)dealloc;
- (void)addEntry:(id)a0;
- (void)_addEntryToMap:(id)a0;
- (id)initWithAddressBook:(void *)a0;
- (void)recacheIdentitiesSoon;
- (void)removeEntryAtIndex:(long long)a0;
- (void)save;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)a0 withUid:(int)a1;
- (void)saveImmediately;
- (void)_delayedLookup;
- (void)_entryIdentityChanged:(id)a0;
- (void)_listChangedExternally;
- (void)_loadList;
- (void)_loadListWithAddressBook:(void *)a0;
- (void)_scheduleSave;
- (BOOL)addEntryForPerson:(void *)a0 property:(int)a1 withIdentifier:(int)a2;
- (BOOL)containsEntryWithIdentifier:(int)a0 forPerson:(void *)a1;
- (BOOL)containsEntryWithType:(int)a0 forPerson:(void *)a1 property:(int)a2 identifier:(int)a3;
- (id)entriesForPeople:(id)a0;
- (id)entriesForPerson:(void *)a0;
- (id)entryFromEntries:(id)a0 type:(int)a1 property:(int)a2 identifier:(int)a3 value:(id)a4 label:(id)a5;
- (id)entryFromEntries:(id)a0 type:(int)a1 property:(int)a2 value:(id)a3 label:(id)a4;
- (BOOL)entryIsDuplicateAndThusRemoved:(id)a0 oldUid:(int)a1;
- (id)entryWithIdentifier:(int)a0 forPerson:(void *)a1;
- (id)entryWithType:(int)a0 forPerson:(void *)a1 property:(int)a2 identifier:(int)a3;
- (void)reportFavoritesIssue:(id)a0;
- (BOOL)shouldNotReportFavoritesError:(id)a0;

@end
