@class NSObject;
@protocol OS_dispatch_queue;

@interface MDMEvents : NSObject {
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)recordData:(id)a0 forEvent:(id)a1;
- (void)recordDateForEvent:(id)a0;

@end
