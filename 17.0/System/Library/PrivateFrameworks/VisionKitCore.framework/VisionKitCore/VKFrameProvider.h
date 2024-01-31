@class NSMutableArray, VKFrameProviderConfiguration, UIView, NSObject;
@protocol OS_dispatch_queue, VKFrameProviderDelegate;

@interface VKFrameProvider : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<VKFrameProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_processors;
    VKFrameProviderConfiguration *_configuration;
    BOOL _delegateRespondsToStabilityChanges;
    BOOL _delegateRespondsToLuminosityChanges;
    unsigned long long _sceneStabilityState;
    double _sceneLuminosity;
    BOOL _processing;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
}

@property (readonly, weak, nonatomic) id<VKFrameProviderDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) VKFrameProviderConfiguration *configuration;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) BOOL isProcessing;
@property (readonly, nonatomic) UIView *previewView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;

- (id)init;
- (void)lock;
- (void)unlock;
- (id)initWithConfiguration:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)startRunning;
- (void)stopRunning;
- (void)stopProcessing;
- (void)sendFrame:(id)a0;
- (void)startProcessing;
- (void)registerProcessor:(id)a0;
- (void)resetAllProcessors;
- (void)unregisterProcessor:(id)a0;

@end
