@class NSOperationQueue, NSString;
@protocol LSObserverDelegate, NSObject;

@interface LSObserver : NSObject {
    id<LSObserverDelegate> _delegate;
    NSOperationQueue *_queue;
    id<NSObject> _changeObserver;
    unsigned char _observing : 1;
}

@property (weak) id<LSObserverDelegate> delegate;
@property (retain) NSOperationQueue *queue;
@property (copy) NSString *name;

+ (void)initialize;

- (void)startObserving;
- (void)stopObserving;
- (void)dealloc;
- (void)_tearDownCallbacks;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_configureCallbacks;

@end
