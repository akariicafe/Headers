@class NSString, NSObject, CADMockSpotlightIndexProvider;
@protocol OS_dispatch_queue;

@interface CADMockSpotlightIndex : NSObject <CADSpotlightIndex> {
    double _minArtificialDelay;
    double _maxArtificialDelay;
    CADMockSpotlightIndexProvider *_provider;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (double)_artificialDelay;
- (id)initWithMinArtificialDelay:(double)a0 maxArtificialDelay:(double)a1 provider:(id)a2;

@end
