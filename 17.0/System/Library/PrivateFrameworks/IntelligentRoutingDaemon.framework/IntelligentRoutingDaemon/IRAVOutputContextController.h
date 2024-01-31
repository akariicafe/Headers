@class NSNotificationCenter, AVOutputContext, NSHashTable;

@interface IRAVOutputContextController : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) AVOutputContext *outputContext;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutputContextType:(long long)a0;
- (void)addObserver:(id)a0;
- (id)getOutputDevice;
- (id)_associatedOutputContextForType:(long long)a0;
- (void)_didUpdateOutputDevice:(id)a0;
- (void)_didUpdatePredictedOutputDevice:(id)a0;
- (void)_registerForAVOutputContextOutputDeviceDidChangeNotification;
- (void)_registerForAVOutputContextPredictedOutputDeviceDidChangeNotification;
- (void)_unregisterForAVOutputContextOutputDeviceDidChangeNotification;
- (void)_unregisterForAVOutputContextPredictedOutputDeviceDidChangeNotification;
- (id)getPredictedOutputDevice;

@end
