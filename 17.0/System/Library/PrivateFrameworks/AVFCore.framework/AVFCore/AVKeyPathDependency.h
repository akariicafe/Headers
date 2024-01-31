@class NSString, AVWeakReference, AVKVODispatcher, NSObject, AVTwoPartKeyPath;
@protocol OS_dispatch_queue, AVCallbackCancellation;

@interface AVKeyPathDependency : NSObject {
    NSObject<OS_dispatch_queue> *_subObjectRegistrationQueue;
    AVKVODispatcher *_KVODispatcher;
    AVWeakReference *_weakReferenceToObject;
    NSString *_dependentKey;
    AVTwoPartKeyPath *_dependencyKeyPath;
    id<AVCallbackCancellation> _leafPropertyChangeNotifier;
}

+ (void)initialize;

- (void)dealloc;
- (void)_reactToSecondLevelPropertyChange:(id)a0;
- (void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)a0;
- (id)initWithObject:(id)a0 thatHasPropertyWithKey:(id)a1 whoseValueDependsOnValueAtKeyPath:(id)a2;
- (id)description;
- (void)initializationIsCompleteForObject:(id)a0;
- (void)_reactToTopLevelPropertyChange:(id)a0;

@end
