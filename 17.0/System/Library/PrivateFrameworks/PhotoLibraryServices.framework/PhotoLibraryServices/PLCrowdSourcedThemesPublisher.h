@interface PLCrowdSourcedThemesPublisher : NSObject

+ (void)publishUUIDs:(id)a0 stream:(unsigned long long)a1 pathManager:(id)a2;
+ (id)publishedUUIDsInStream:(unsigned long long)a0 pathManager:(id)a1;
+ (id)_nameForStream:(unsigned long long)a0;
+ (id)_biomeStreamForStream:(unsigned long long)a0 pathManager:(id)a1;

@end
