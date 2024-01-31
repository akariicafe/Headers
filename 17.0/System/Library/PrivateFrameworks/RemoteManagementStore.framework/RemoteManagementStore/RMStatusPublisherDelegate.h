@class RMSharedLock, NSObject;
@protocol OS_dispatch_queue;

@interface RMStatusPublisherDelegate : NSObject {
    RMSharedLock *_fetchLock;
}

@property (readonly, nonatomic) Class publisherClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publisherQueue;

+ (id)sharedDelegateWithPublisherClass:(Class)a0;

- (void).cxx_destruct;
- (id)_filterSupportedStatus:(id)a0 store:(id)a1 unsupported:(id)a2;
- (void)fetchStatusForStatusKeys:(id)a0 store:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPublisherClass:(Class)a0;

@end
