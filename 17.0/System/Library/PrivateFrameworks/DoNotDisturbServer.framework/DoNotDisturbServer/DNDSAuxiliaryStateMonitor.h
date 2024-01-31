@class NSObject;
@protocol OS_dispatch_queue;

@interface DNDSAuxiliaryStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _presentationModeEnabled;
    BOOL _screenShared;
    BOOL _screenMirrored;
}

@property (readonly, nonatomic, getter=isPresentationModeEnabled) BOOL presentationModeEnabled;
@property (nonatomic, getter=isScreenShared) BOOL screenShared;
@property (nonatomic, getter=isScreenMirrored) BOOL screenMirrored;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
