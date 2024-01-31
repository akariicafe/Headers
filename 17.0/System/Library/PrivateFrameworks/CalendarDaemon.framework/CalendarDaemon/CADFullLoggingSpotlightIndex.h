@class NSString;
@protocol CADSpotlightIndex;

@interface CADFullLoggingSpotlightIndex : NSObject <CADSpotlightIndex> {
    id<CADSpotlightIndex> _wrappedIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIndex:(id)a0;
- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
