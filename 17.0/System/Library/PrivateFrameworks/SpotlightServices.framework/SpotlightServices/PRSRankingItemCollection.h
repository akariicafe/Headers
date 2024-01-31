@class NSArray, NSString, NSDictionary;

@interface PRSRankingItemCollection : NSObject

@property (retain) NSArray *arrayOfRankingItems;
@property unsigned long long countOfVisibleResults;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSDictionary *mapResultIdToProtectionClass;

- (id)description;
- (void).cxx_destruct;

@end
