@class NSObject;
@protocol OS_dispatch_queue;

@interface FSSimpleItem : FSItem {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
