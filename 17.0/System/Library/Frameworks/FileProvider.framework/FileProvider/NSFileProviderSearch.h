@class NSString, NSFileProviderSearchQuery;

@interface NSFileProviderSearch : NSObject {
    NSFileProviderSearchQuery *_legacySearchQuery;
}

@property (readonly, copy, nonatomic) NSFileProviderSearchQuery *legacySearchQuery;
@property (readonly, copy, nonatomic) NSString *spotlightQueryString;
@property (readonly, copy, nonatomic) NSString *scopedToItemIdentifier;
@property (readonly, copy, nonatomic) NSString *searchContainerItemIdentifier;

- (void).cxx_destruct;
- (id)initWithSpotlightQueryString:(id)a0 scopedToItemIdentifier:(id)a1 searchContainerItemIdentifier:(id)a2 legacySearchQuery:(id)a3;

@end
