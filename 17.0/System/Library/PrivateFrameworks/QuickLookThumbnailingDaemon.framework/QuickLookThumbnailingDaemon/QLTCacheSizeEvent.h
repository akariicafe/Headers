@class NSString;

@interface QLTCacheSizeEvent : NSObject <QLTAnalyticsEventProtocol>

@property (readonly) unsigned long long cacheSize;
@property (readonly) NSString *name;
@property (readonly) id /* block */ propertiesBuilder;

- (id)initWithCacheSize:(unsigned long long)a0;
- (id)build;

@end
