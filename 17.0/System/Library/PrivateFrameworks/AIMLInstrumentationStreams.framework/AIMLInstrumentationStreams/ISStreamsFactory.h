@class ISStreamsProvider, NSURL, NSError, ISEventFilter;

@interface ISStreamsFactory : NSObject

+ (void)constructWithFilter:(ISEventFilter *)a0 startTime:(double)a1 endTime:(double)a2 maxEvents:(long long)a3 lastN:(long long)a4 completionHandler:(void (^)(ISStreamsProvider *, NSError *))a5;
+ (void)constructWithFilter:(ISEventFilter *)a0 startTime:(double)a1 endTime:(double)a2 maxEvents:(long long)a3 lastN:(long long)a4 storageURL:(NSURL *)a5 completionHandler:(void (^)(ISStreamsProvider *, NSError *))a6;
+ (void)constructWithFilter:(ISEventFilter *)a0 startTimeRelativeToNow:(double)a1 completionHandler:(void (^)(ISStreamsProvider *, NSError *))a2;
+ (void)constructWithFilter:(ISEventFilter *)a0 startTimeRelativeToNow:(double)a1 storageURL:(NSURL *)a2 completionHandler:(void (^)(ISStreamsProvider *, NSError *))a3;

- (id)init;

@end
