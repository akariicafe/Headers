@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject {
    REUpNextScheduler *_scheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void)_notify;
- (void)dealloc;
- (void).cxx_destruct;

@end
