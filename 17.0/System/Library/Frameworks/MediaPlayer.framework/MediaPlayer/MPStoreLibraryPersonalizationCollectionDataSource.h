@class MPMediaLibraryView, NSMapTable, NSDictionary, NSMutableDictionary, NSString, MPSectionedCollection, MPPropertySet;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct vector<std::shared_ptr<mlcore::EntityCache>, std::allocator<std::shared_ptr<mlcore::EntityCache>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<mlcore::EntityCache> *, std::allocator<std::shared_ptr<mlcore::EntityCache>>> { void *__value_; } __end_cap_; } _entityCaches;
}

@property (retain, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (copy, nonatomic) MPPropertySet *itemProperties;
@property (copy, nonatomic) MPPropertySet *sectionProperties;
@property (copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse;
@property (retain, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_lightweightPersonalizedLyricsWithUnpersonalizedLyrics:(id)a0 libraryLyrics:(id)a1 identifiers:(id)a2 personalizationProperties:(id)a3;
+ (id)_completePersonalizedObjectWithLibraryObject:(id)a0 personalizationProperties:(id)a1 overrideLibraryAddedStatus:(long long)a2;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 identifiers:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 libraryPlaybackPosition:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)a0 libraryObject:(id)a1 personalizationProperties:(id)a2 overrideLibraryAddedStatus:(long long)a3;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)a0 libraryAsset:(id)a1 personalizationProperties:(id)a2;

- (id)_libraryObjectWithRelativeModelClass:(Class)a0 identifierSet:(id)a1 propertySet:(id)a2;
- (id)init;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id).cxx_construct;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (struct shared_ptr<mlcore::EntityCache> { struct EntityCache *x0; struct __shared_weak_count *x1; })_entityCacheForEntityClass:(void *)a0 propertiesToFetch:(struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; struct ModelPropertyBase **x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; } x2; })a1;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;

@end
