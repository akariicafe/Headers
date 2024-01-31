@class NSSet, NSDictionary, ATXFaceGalleryConfiguration, NSOrderedSet, NSMutableDictionary;
@protocol PRPosterExtensionProvider, PBFComplicationSnapshotProviding, PBFPosterSnapshotProviding;

@interface PBFGalleryConfiguration : NSObject {
    NSOrderedSet *_sectionIdentifiers;
    NSDictionary *_sectionIdentifierToSectionMap;
    NSDictionary *_sectionIdentifierToItems;
    NSMutableDictionary *_posterDescriptorLookupInfoForItemIdentifier;
    NSDictionary *_previewIdentifierToPreview;
    NSOrderedSet *_previews;
}

@property (readonly, nonatomic) NSDictionary *dynamicDescriptorsByExtensionIdentifier;
@property (readonly, nonatomic) NSDictionary *staticDescriptorsByExtensionIdentifier;
@property (readonly, nonatomic) NSDictionary *extensionsByIdentifier;
@property (readonly, nonatomic) NSSet *posterPreviews;
@property (retain, nonatomic) id<PBFPosterSnapshotProviding> snapshotProvider;
@property (retain, nonatomic) id<PBFComplicationSnapshotProviding> complicationSnapshotProvider;
@property (weak, nonatomic) id<PRPosterExtensionProvider> extensionProvider;
@property (readonly, nonatomic) ATXFaceGalleryConfiguration *suggestedLayout;
@property (readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;

- (id)snapshotURLsForContext:(id)a0;
- (id)init;
- (id)_posterDescriptorLookupInfoForPreviewItem:(id)a0;
- (void)dealloc;
- (id)initWithSuggestedLayout:(id)a0 dynamicDescriptorsByExtensionIdentifier:(id)a1 staticDescriptorsByExtensionIdentifier:(id)a2 extensionsByIdentifier:(id)a3;
- (id)posterPreviewForUniqueIdentifier:(id)a0;
- (void)_hydrateSectionIdentifiersIfNeeded;
- (void)enumeratePreviews:(id /* block */)a0;
- (void)prewarmGallerySnapshotsWithCompletion:(id /* block */)a0;
- (id)_posterDescriptorLookupInfoForItem:(id)a0;
- (id)itemsForSectionWithIdentifier:(id)a0;
- (id)gallerySnapshotRequestsForDisplayContexts:(id)a0;
- (id)posterSnapshotRequestsForPreview:(id)a0 context:(id)a1;
- (id)complicationSnapshotRequests;
- (void)fetchComplicationsForPreview:(id)a0 completion:(id /* block */)a1;
- (id)prewarmGallerySnapshotRequestsForDisplayContext:(id)a0;
- (id)sectionForSectionIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)previewForItem:(id)a0 section:(id)a1;
- (id)snapshotURLsForPathIdentityForContext:(id)a0;
- (id)posterSnapshotRequestsForExtensionBundleIdentifier:(id)a0 context:(id)a1;
- (id)posterSnapshotRequestsForContext:(id)a0;

@end
