@class NSUUID, NSString, NSArray, _UICollectionViewFocusedItemState, NSSet, NSMutableDictionary, UICollectionViewData, NSMutableArray, UICollectionView, NSIndexSet;

@interface UICollectionViewUpdate : NSObject <_UICollectionViewUpdateTranslating> {
    NSArray *_updateItems;
    UICollectionViewData *_oldModel;
    UICollectionViewData *_newModel;
    struct CGPoint { double x; double y; } _oldContentOffset;
    struct CGPoint { double x; double y; } _newContentOffset;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    _UICollectionViewFocusedItemState *_oldFocusedItemState;
    _UICollectionViewFocusedItemState *_newFocusedItemState;
    UICollectionView *_collectionView;
    NSSet *_itemAnchoredAuxiliaryElementKinds;
    NSSet *_moveItemSourceIndexPaths;
    struct _UIDataSourceUpdateMaps { unsigned int oldSectionCount; unsigned int newSectionCount; unsigned int oldGlobalItemCount; unsigned int newGlobalItemCount; unsigned int *oldSectionMap; unsigned int *newSectionMap; unsigned int *oldGlobalItemMap; unsigned int *newGlobalItemMap; BOOL updatesAreInvalid; } _updateMaps;
    struct { unsigned char layoutPreparedForUpdates : 1; unsigned char animated : 1; } _flags;
    NSString *_invalidUpdatesErrorMessage;
    NSUUID *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (void)dealloc;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)finalSectionCount;
- (void)_generateUpdateMaps;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialSectionCount;

@end
