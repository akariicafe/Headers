@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TFFeedbackDataContainerObserver;

@interface TFFeedbackDataContainer : NSObject <TFFeedbackDataWritable, TFFeedbackDataSource>

@property (readonly, nonatomic) NSMutableSet *includedGroupIdentifiers;
@property (readonly, nonatomic) NSMutableSet *loadingEntryIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *stringEntryMap;
@property (readonly, nonatomic) NSMutableDictionary *numberEntryMap;
@property (readonly, nonatomic) NSMutableDictionary *imageCollectionEntryMap;
@property (readonly, nonatomic) NSMutableArray *dirtyGroupIdentifiers;
@property (readonly, nonatomic) NSMutableArray *dirtyEntryIdentifiers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (weak, nonatomic) id<TFFeedbackDataContainerObserver> observer;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBatchUpdates:(id /* block */)a0;
- (id)objectForIdentifier:(id)a0;
- (BOOL)isLoading;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStringForIdentifier:(id)a0 toValue:(id)a1;
- (void)setNumberForIdentifier:(id)a0 toValue:(id)a1;
- (void)_clearDirtyIdentifiers;
- (void)_markEntryIdentifierDirty:(id)a0;
- (void)_markGroupIdentifierDirty:(id)a0;
- (void)_notifyObserverOfUpdates;
- (id)imageCollectionForIdentifer:(id)a0;
- (id)initWithName:(id)a0 includedGroupIdentifiers:(id)a1 loadingEntryIdentifiers:(id)a2 stringEntryMap:(id)a3 numberEntryMap:(id)a4 imageCollectionEntryMap:(id)a5 dirtyGroupIdentifiers:(id)a6 dirtyEntryIdentifiers:(id)a7;
- (BOOL)isEntryWithIdentifierLoading:(id)a0;
- (BOOL)isGroupWithIdentifierIncluded:(id)a0;
- (id)numberForIdentifier:(id)a0;
- (void)overwriteWithContentsOfDataContainer:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0 suppressingNotifications:(BOOL)a1;
- (void)prepareInitialValuesForForm:(id)a0;
- (void)setEntryLoadingForIdentifier:(id)a0 toValue:(BOOL)a1;
- (void)setGroupInclusionForIdentifier:(id)a0 toValue:(BOOL)a1;
- (void)setImageCollectionForIdentifier:(id)a0 toValue:(id)a1;
- (id)stringForIdentifier:(id)a0;

@end
