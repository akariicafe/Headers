@class NSString, NSMutableArray;

@interface CADMockSpotlightIndexProvider : NSObject <CADSpotlightIndexProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_store;
}

@property (nonatomic) double minArtificialDelay;
@property (nonatomic) double maxArtificialDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)deleteAllSearchableItemsForBundleID:(id)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0;
- (void)indexSearchableItems:(id)a0;
- (id)initWithMinArtificialDelay:(double)a0 maxArtificialDelay:(double)a1;
- (id)itemsInIndex;
- (id)newSpotlightIndexForBundleID:(id)a0;

@end
