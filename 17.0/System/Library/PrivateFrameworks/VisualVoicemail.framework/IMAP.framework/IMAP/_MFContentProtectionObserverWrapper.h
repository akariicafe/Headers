@class VFWeakReferenceHolder, NSObject;
@protocol OS_dispatch_queue, MFContentProtectionObserver;

@interface _MFContentProtectionObserverWrapper : NSObject {
    VFWeakReferenceHolder *_observerReference;
}

@property (readonly, nonatomic) id<MFContentProtectionObserver> observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 queue:(id)a1;

@end
