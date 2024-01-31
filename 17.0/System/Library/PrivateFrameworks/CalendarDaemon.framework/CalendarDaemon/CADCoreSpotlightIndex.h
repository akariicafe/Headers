@class NSString, CSSearchableIndex;

@interface CADCoreSpotlightIndex : NSObject <CADSpotlightIndex> {
    CSSearchableIndex *_index;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBundleID:(id)a0;
- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
