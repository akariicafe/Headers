@class NSString, NSDictionary, NSDate;

@interface LRRFeatureStoreFilterInformation : NSObject

@property BOOL filterSamples;
@property NSDate *lastReplayDate;
@property NSString *currentTimeStampStr;
@property NSDictionary *assetInfo;

- (id)init;

@end
