@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *allTasks;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterTask:(id)a0;
- (void)registerTask:(id)a0;

@end
