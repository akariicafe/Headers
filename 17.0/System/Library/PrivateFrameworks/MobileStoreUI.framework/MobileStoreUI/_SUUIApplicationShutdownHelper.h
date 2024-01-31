@class SUUIApplicationController;

@interface _SUUIApplicationShutdownHelper : NSObject {
    SUUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithApplicationController:(id)a0;

@end
