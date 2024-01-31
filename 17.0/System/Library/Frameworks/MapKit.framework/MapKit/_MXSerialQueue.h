@class NSObject;
@protocol OS_dispatch_group;

@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}

+ (id)taskQueue;
+ (id)taskCompletionQueue;
+ (id)taskInsertionQueue;

- (id)init;
- (void)addTask:(id /* block */)a0;
- (void).cxx_destruct;

@end
