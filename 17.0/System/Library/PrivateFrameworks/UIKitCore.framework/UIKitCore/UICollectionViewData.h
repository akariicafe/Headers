@class UICollectionViewLayout, NSMutableDictionary, _UIMutableFastIndexSet, UICollectionView, _UICollectionViewDataAttributesMap, NSArray;

@interface UICollectionViewData : NSObject {
    UICollectionView *_collectionView;
    UICollectionViewLayout *_layout;
    _UIMutableFastIndexSet *_globalIndexesOfItemsAwaitingValidation;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct CGSize { double width; double height; } _contentSize;
    struct { unsigned char contentSizeIsValid : 1; unsigned char itemCountsAreValid : 1; unsigned char layoutIsPreparing : 1; unsigned char layoutIsPrepared : 1; unsigned char layoutLocked : 1; } _collectionViewDataFlags;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _sectionItemCounts;
    struct unordered_map<long, UICollectionViewLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, UICollectionViewLayoutAttributes *>>> { struct __hash_table<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>>> { float __value_; } __p3_; } __table_; } _globalItemMap;
    long long _totalItemCount;
    _UICollectionViewDataAttributesMap *_attributesMap;
    unsigned long long _preUpdateCachedItemCount;
    NSArray *_clonedCellAttributes;
    NSArray *_clonedSupplementaryAttributes;
    NSArray *_clonedDecorationAttributes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_TEST_validLayoutRect;

@end
