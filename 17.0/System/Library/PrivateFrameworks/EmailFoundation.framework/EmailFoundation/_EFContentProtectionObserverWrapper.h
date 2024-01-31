@class NSObject;
@protocol OS_dispatch_queue, EFContentProtectionObserver;

@interface _EFContentProtectionObserverWrapper : NSObject

@property (readonly, weak, nonatomic) id<EFContentProtectionObserver> observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 queue:(id)a1;

@end
