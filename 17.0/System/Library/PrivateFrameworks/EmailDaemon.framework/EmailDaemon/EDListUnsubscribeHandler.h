@class EMListUnsubscribeDetector;
@protocol EFScheduler;

@interface EDListUnsubscribeHandler : NSObject {
    EMListUnsubscribeDetector *_detector;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _detectorLock;
}

@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) EMListUnsubscribeDetector *detector;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)ignoreWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeHTMLWithCommand:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)unsubscribeMailtoWithCommand:(id)a0 completion:(id /* block */)a1;

@end
