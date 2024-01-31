@class NSString;

@interface STUpdateMonitor : NSObject

@property (readonly) long long currentUpdateSize;
@property (readonly) NSString *currentUpdateName;
@property (readonly) NSString *bundleIdentifier;

+ (id)sharedMonitor;

- (void)sync;
- (void).cxx_destruct;
- (void)startMonitor;
- (void)stopMonitor;

@end
