@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject

@property (readonly) CNCache *directoryServerReuseCache;
@property (readonly) CNCache *calendarServerReuseCache;

+ (id)cacheBoundaryStrategies;

- (id)init;
- (void).cxx_destruct;

@end
