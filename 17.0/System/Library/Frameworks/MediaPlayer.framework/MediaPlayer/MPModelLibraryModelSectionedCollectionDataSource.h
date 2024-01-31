@class NSString, MPModelLibraryRequest, MPMediaLibraryEntityTranslationContext;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;
    struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } _allowedSectionPersistentIDs;
    struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> { struct __tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>, std::allocator<std::__value_type<long long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
}

@property (readonly, nonatomic) struct shared_ptr<std::map<long long, std::shared_ptr<mlcore::EntityQueryResult>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } itemEntityQueryResults;
@property (readonly, nonatomic) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *__ptr_; struct __shared_weak_count *__cntrl_; } sectionEntityQueryResult;
@property (readonly, nonatomic) MPModelLibraryRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0 sectionQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *x0; struct __shared_weak_count *x1; })a1 itemQueryResults:(void *)a2;
- (void)_populateIndexMap;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id).cxx_construct;
- (unsigned long long)_adjustedIndexForSectionIndex:(long long)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (BOOL)hasSameContentAsDataSource:(id)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;

@end
