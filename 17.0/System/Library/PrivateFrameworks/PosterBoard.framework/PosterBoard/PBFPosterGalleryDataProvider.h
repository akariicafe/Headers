@class PBFPosterExtensionInstanceCollection, NSOrderedSet, NSMutableDictionary, NSMutableOrderedSet, NSString, NSHashTable, NSMutableSet;
@protocol PRPosterExtensionProvider, PBFComplicationSnapshotProviding, PBFPosterSnapshotProviding;

@interface PBFPosterGalleryDataProvider : NSObject <NSCopying, NSMutableCopying, PBFPosterPreviewGenerator, PBFExtensionInstanceProviding, BSInvalidatable> {
    NSHashTable *_observers;
    long long _transactionsCount;
    long long _changeCount;
    NSMutableSet *_outstandingSnapshotRequests;
    PBFPosterExtensionInstanceCollection *_extensionInstanceCollection;
}

@property (retain, nonatomic) NSMutableOrderedSet *orderedSectionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToSectionType;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToItems;
@property (retain, nonatomic) NSMutableDictionary *posterPreviewForPosterUniqueIdentifier;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToLocalizedTitle;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToLocalizedSubtitle;
@property (retain, nonatomic) id<PBFPosterSnapshotProviding> snapshotProvider;
@property (retain, nonatomic) id<PBFComplicationSnapshotProviding> complicationSnapshotProvider;
@property (retain, nonatomic) id<PRPosterExtensionProvider> extensionProvider;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) NSOrderedSet *sectionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)demoPreviewProvider;

- (id)sectionIdentifierForIndex:(long long)a0;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)acquireExtensionInstance:(id)a0 reason:(id)a1 error:(out id *)a2;
- (void)invalidate;
- (id)itemsForSectionWithIdentifier:(id)a0;
- (void)_notifyObserversDidUpdate;
- (void).cxx_destruct;
- (void)relinquishExtensionInstance:(id)a0 reason:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addObserver:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)posterPreviews;
- (void)_decrementTransactionCount:(BOOL)a0;
- (void)_incrementTransactionCount:(BOOL)a0;
- (void)_markChangeDidOccur;
- (void)_notifyObserversWillUpdate;
- (id)buildSnapshot;
- (void)fetchComplicationPreviewImagesForPreview:(id)a0 complicationSnapshotReceivedHandler:(id /* block */)a1 errorHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)fetchSnapshotForPosterPreview:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)fetchSnapshotForPosterPreview:(id)a0 context:(id)a1 definition:(id)a2 completion:(id /* block */)a3;
- (id)localizedSubtitleForSectionWithIdentifier:(id)a0;
- (id)localizedTitleForSectionWithIdentifier:(id)a0;
- (unsigned long long)numberOfItemsInSectionWithIdentifier:(id)a0;
- (id)posterPreviewsForPath:(id)a0;
- (id)preparedComplicationPreviewImagesForPreview:(id)a0;
- (id)preparedSnapshotForPosterPreview:(id)a0 context:(id)a1;
- (id)preparedSnapshotForPosterPreview:(id)a0 context:(id)a1 definition:(id)a2;
- (id)previewForPreviewUniqueIdentifier:(id)a0;
- (unsigned long long)sectionIndexForIdentifier:(id)a0;
- (BOOL)sectionShowsDescriptionLabel:(id)a0;
- (BOOL)sectionShowsTitleLabel:(id)a0;
- (long long)sectionTypeForSectionWithIdentifier:(id)a0;

@end
