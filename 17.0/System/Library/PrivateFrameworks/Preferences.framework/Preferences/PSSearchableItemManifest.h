@class NSMutableArray;

@interface PSSearchableItemManifest : NSObject

@property (retain, nonatomic) NSMutableArray *searchableItems;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)_escapedStringForString:(id)a0;
- (id)_stringKeyForString:(id)a0;
- (void)addSearchableItem:(id)a0;
- (void)addSearchableItems:(id)a0;
- (void)removeSearchableItem:(id)a0;
- (BOOL)writeToPlistAndStringsFilesAtURL:(id)a0 error:(id *)a1;

@end
