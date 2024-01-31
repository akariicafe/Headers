@class NSDate, NSString, NSArray, PHAsset, NSSet, NSMutableSet, NSDateComponents, NSMutableOrderedSet;
@protocol PGHighlightItem;

@interface PGHighlightItemList : NSObject <PGHighlightItem>

@property (retain, nonatomic) NSMutableOrderedSet *internalHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalAddedHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems;
@property (nonatomic) unsigned short visibilityStatePrivate;
@property (nonatomic) unsigned short visibilityStateShared;
@property (nonatomic) unsigned short visibilityStateMixed;
@property (retain, nonatomic) id modelObject;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDateComponents *localDateComponents;
@property (readonly, nonatomic) unsigned short sharingComposition;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, copy, nonatomic) NSArray *sortedHighlightItemModelObjects;
@property (readonly, nonatomic) BOOL isNewList;
@property (readonly, nonatomic) BOOL isCandidateForReuse;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (readonly, nonatomic) id<PGHighlightItem> parentHighlightItem;
@property (retain, nonatomic) PHAsset *keyAssetPrivate;
@property (retain, nonatomic) PHAsset *keyAssetShared;
@property (nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property (retain, nonatomic) NSArray *extendedCuratedAssets;
@property (nonatomic) double promotionScore;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long numberOfAssetsInExtendedPrivate;
@property (readonly, nonatomic) unsigned long long numberOfAssetsInExtendedShared;
@property (readonly, nonatomic) unsigned long long numberOfAssetsInExtendedMixed;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short kind;
@property (readonly, nonatomic) unsigned short category;
@property (readonly, nonatomic) unsigned short enrichmentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeSortDescriptors;
+ (void)updateParentHighlightItemLists:(id)a0 withChildHighlightItems:(id)a1;

- (id)initWithParentHighlightItem:(id)a0 childHighlightItems:(id)a1;
- (void)_updateHighlightItemsOrdering;
- (void)addHighlightItem:(id)a0;
- (void).cxx_destruct;
- (void)removeHighlightItem:(id)a0;
- (id)initAsNewList;
- (id)childHighlightItemsForHighlightFilter:(unsigned short)a0;
- (id)keyAssetForHighlightFilter:(unsigned short)a0;
- (unsigned long long)numberOfAssetsInExtendedForSharingFilter:(unsigned short)a0;
- (void)setVisibilityState:(unsigned short)a0 forSharingFilter:(unsigned short)a1;
- (unsigned short)visibilityStateForHighlightFilter:(unsigned short)a0;

@end
