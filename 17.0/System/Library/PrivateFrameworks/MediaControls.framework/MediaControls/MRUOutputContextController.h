@class AVOutputContext, AVOutputDevice;
@protocol MRUOutputContextControllerDelegate;

@interface MRUOutputContextController : NSObject {
    AVOutputContext *_outputContext;
    long long _outputContextType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<MRUOutputContextControllerDelegate> delegate;
@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic) AVOutputDevice *outputDevice;

- (void)setOutputContext:(id)a0;
- (void)mediaServicesWereLostNotification:(id)a0;
- (void)registerNotificationsForOutputContext:(id)a0;
- (id)associatedOutputContext;
- (void)_setOutputDevice:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)initializeOutputContextWithCompletion:(id /* block */)a0;
- (void)mediaServicesWereResetNotification:(id)a0;
- (void)setOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unregisterNotificationsForOutputContext:(id)a0;
- (id)initWithOutputContextType:(long long)a0;
- (void)outputDeviceChangedNotification:(id)a0;

@end
