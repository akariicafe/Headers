@class PHPhotoLibrary, NSMutableDictionary, NSString;

@interface PGHighlightItemModelManager : NSObject <PGHighlightItemModelReader, PGHighlightItemListModelWriter>

@property (readonly, nonatomic) PHPhotoLibrary *library;
@property (readonly, nonatomic) NSMutableDictionary *visibilityStatePrivateByHighlighItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *visibilityStateSharedByHighlighItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *visibilityStateMixedByHighlighItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *contextualKeyAssetPrivateByHighlighItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *contextualKeyAssetSharedByHighlighItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *contextualKeyAssetMixedByHighlighItemUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (id)initForTesting;
- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (id)fetchParentHighlightItemsForHighlightItems:(id)a0;
- (id)_contextualKeyAssetByHighlighItemUUIDForHighlightFilter:(unsigned short)a0;
- (id)_visibilityStateByHighlighItemUUIDForHighlightFilter:(unsigned short)a0;
- (void)addVisibleHighlight:(id)a0 inMonth:(id)a1 withHighlightFilter:(unsigned short)a2;
- (void)consumeHighlightItemList:(id)a0;
- (id)contextualKeyAssetForHighlightItem:(id)a0 sharingFilter:(unsigned short)a1;
- (id)fetchChildHighlightItemsForHighlightItem:(id)a0 sharingFilter:(unsigned short)a1;
- (id)highlightUUIDsWithContextualKeyAssetChange;
- (id)highlightUUIDsWithVisibilityStateChange;
- (void)setContextualKeyAsset:(id)a0 forHighlightItem:(id)a1 sharingFilter:(unsigned short)a2;
- (void)setVisibilityState:(unsigned short)a0 forHighlightItem:(id)a1 sharingFilter:(unsigned short)a2;
- (void)setVisibilityState:(unsigned short)a0 forHighlightItemList:(id)a1 sharingFilter:(unsigned short)a2;
- (unsigned short)visibilityStateForHighlightItem:(id)a0 sharingFilter:(unsigned short)a1;

@end
