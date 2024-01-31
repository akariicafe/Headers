@class NSObject, NSDate;

@interface NWStatsEntityMapCacheEntry : NSObject

@property (retain) NSDate *expiryTime;
@property (retain) NSObject *entityName;

- (id)description;
- (void).cxx_destruct;

@end
