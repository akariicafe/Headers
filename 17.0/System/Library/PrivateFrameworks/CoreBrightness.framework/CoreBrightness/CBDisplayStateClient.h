@class BrightnessSystemClientInternal, NSObject;
@protocol CBDisplayStateClientDelegate, OS_os_log, OS_dispatch_queue;

@interface CBDisplayStateClient : NSObject {
    BrightnessSystemClientInternal *_bsci;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _active;
}

@property (retain, nonatomic) id<CBDisplayStateClientDelegate> completionDelegate;
@property (readonly, nonatomic) BOOL supported;
@property (readonly, nonatomic) long long displayMode;

- (id)init;
- (void)dealloc;
- (void)activate;
- (void)cancel;
- (void)_displayModeChangeCompletionHandler:(long long)a0;
- (void)_removeCompletionDelegate;
- (BOOL)switchToFlipbookState:(long long)a0 error:(id *)a1;
- (BOOL)transitionToDisplayMode:(long long)a0 withDuration:(double)a1 error:(id *)a2;

@end
