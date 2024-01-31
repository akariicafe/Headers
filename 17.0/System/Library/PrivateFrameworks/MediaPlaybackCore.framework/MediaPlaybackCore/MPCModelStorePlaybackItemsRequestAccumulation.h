@class MPLibraryObjectDatabase, NSString, NSDictionary, ICURLAggregatedPerformanceMetrics, MPSectionedCollection, MPPropertySet;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPCModelStorePlaybackItemsRequestAccumulation : NSObject <MPLazySectionedCollectionDataSource> {
    MPSectionedCollection *_progressiveResults;
    id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> _trustID;
    MPSectionedCollection *_requestedSectionedModelObjects;
    MPPropertySet *_properties;
    MPPropertySet *_personalizationProperties;
}

@property (readonly, copy, nonatomic) MPSectionedCollection *results;
@property (readonly, nonatomic) NSDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPLibraryObjectDatabase *libraryObjectDatabase;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiersForSectionAtIndex:(long long)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)initWithProgressiveResults:(id)a0 equivalencyMapping:(id)a1 request:(id)a2 libraryObjectDatabase:(id)a3 performanceMetrics:(id)a4;

@end
