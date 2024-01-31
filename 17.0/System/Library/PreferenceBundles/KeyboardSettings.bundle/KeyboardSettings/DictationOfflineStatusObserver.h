@protocol DictationOfflineStatusObserverDelegate;

@interface DictationOfflineStatusObserver : NSObject

@property (weak, nonatomic) id<DictationOfflineStatusObserverDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)updateOfflineDictationStatus;

@end
