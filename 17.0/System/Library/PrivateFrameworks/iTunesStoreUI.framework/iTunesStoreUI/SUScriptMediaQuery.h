@class NSArray, MPMediaQuery, NSString;

@interface SUScriptMediaQuery : SUScriptObject {
    NSArray *_collections;
    NSArray *_filterPredicates;
    NSArray *_items;
    BOOL _watchingLibrary;
}

@property (readonly, nonatomic) MPMediaQuery *nativeQuery;
@property (readonly) NSArray *collections;
@property (copy) id filterPredicates;
@property (copy) NSString *groupingType;
@property (readonly) NSArray *items;
@property (readonly) NSString *comparisonTypeContains;
@property (readonly) NSString *comparisonTypeEquals;
@property (readonly) NSString *groupingTypeAlbum;
@property (readonly) NSString *groupingTypeAlbumArtist;
@property (readonly) NSString *groupingTypeArtist;
@property (readonly) NSString *groupingTypeComposer;
@property (readonly) NSString *groupingTypeGenre;
@property (readonly) NSString *groupingTypePlaylist;
@property (readonly) NSString *groupingTypePodcastTitle;
@property (readonly) NSString *groupingTypeTitle;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (void)addFilterPredicate:(id)a0;
- (void)removeFilterPredicate:(id)a0;
- (id)canFilterByProperty:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (void)_resetCaches;
- (id)scriptAttributeKeys;
- (void)_beginWatchingLibraryIfNecessary;
- (void)_libraryChangedNotification:(id)a0;
- (id)makeFilterPredicateWithProperty:(id)a0 value:(id)a1 comparisonType:(id)a2;

@end
