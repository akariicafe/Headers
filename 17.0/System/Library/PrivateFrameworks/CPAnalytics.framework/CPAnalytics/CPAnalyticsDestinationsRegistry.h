@class NSArray, NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations;

- (id)init;
- (id)_readConfiguration:(id)a0;
- (void)addDestination:(id)a0;
- (void).cxx_destruct;
- (void)removePhotoLibraryFromDestinations;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)sendToAllDestinations:(id)a0;
- (id)_destinationClassMap;
- (void)removeDestination:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;

@end
