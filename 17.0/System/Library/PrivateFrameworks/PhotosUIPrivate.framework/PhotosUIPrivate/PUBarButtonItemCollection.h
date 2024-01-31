@class UIBarButtonItem, NSMutableDictionary, NSIndexSet, NSArray, NSDictionary, NSCache;
@protocol PUBarButtonItemCollectionDataSource;

@interface PUBarButtonItemCollection : NSObject

@property (readonly, nonatomic) unsigned long long _options;
@property (readonly, nonatomic) NSCache *_configurationsCache;
@property (readonly, nonatomic) NSMutableDictionary *_barButtonItems;
@property (copy, nonatomic, setter=_setPreviousRequestedSet:) NSIndexSet *_previousRequestedSet;
@property (retain, nonatomic, setter=_setPreviousResult:) NSArray *_previousResult;
@property (readonly, nonatomic) UIBarButtonItem *_flexibleSpaceBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *_placeholderBarButtonItem;
@property (retain, nonatomic) NSArray *identifiersOrder;
@property (retain, nonatomic) NSIndexSet *centeredItemIdentifiers;
@property (weak, nonatomic) id<PUBarButtonItemCollectionDataSource> dataSource;
@property (readonly, nonatomic) NSDictionary *barButtonItems;

- (id)init;
- (void)_resetSet;
- (id)barButtonItemForIdentifier:(long long)a0;
- (void).cxx_destruct;
- (id)_arrangedBarButtonItems:(id)a0 identifiers:(id)a1;
- (long long)identifierForCustomButton:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (id)orderedBarButtonsItemsForIdentifiers:(id)a0;
- (long long)identifierForBarButtonItem:(id)a0;
- (void)_centersButtonsIfNeeded:(id)a0 identifiers:(id)a1;
- (id)_newEntryForIdentifiers:(id)a0;

@end
