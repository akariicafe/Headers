@class NSDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) BOOL allowsResponse;
@property (readonly, nonatomic) unsigned long long components;

+ (BOOL)matchEvent:(id)a0 toFilter:(id)a1;

- (id)init;
- (id)exportObject;
- (BOOL)matchesEvent:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;

@end
