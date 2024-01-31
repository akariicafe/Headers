@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface WatchDogTimer : CHLogger {
    NSString *_name;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)dealloc;
- (id)initWithQueue:(id)a0 withName:(id)a1 withTimeout:(double)a2 withCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)cancel;

@end
