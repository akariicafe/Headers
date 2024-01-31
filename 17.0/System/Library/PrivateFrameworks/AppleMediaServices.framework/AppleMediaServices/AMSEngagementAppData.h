@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *cachedResponses;
@property (retain, nonatomic) NSArray *eventFilters;
@property (readonly, nonatomic) NSString *identifier;

- (id)exportObject;
- (id)initWithIdentifier:(id)a0 cacheObject:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
