@class NSObject, CDComplicationHostingView;
@protocol OS_dispatch_semaphore;

@interface _ClientRenderer : NSObject {
    CDComplicationHostingView *_host;
    double _renderTime;
    double _renderCost;
    NSObject<OS_dispatch_semaphore> *_sema;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)renderWithViewData:(id)a0 scale:(double)a1 handler:(id /* block */)a2;
- (void)_handleRenderStatsTime:(double)a0 cost:(double)a1;

@end
