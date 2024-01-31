@class BMStreamBase, NSString, BPSSink, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface SearchUIBiomeStreamSubscriber : NSObject

@property (retain, nonatomic) BMStreamBase *stream;
@property (retain, nonatomic) BPSSink *biomeSink;
@property (retain, nonatomic) NSNotificationCenter *center;
@property unsigned long long observerCount;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *streamIdentifier;
@property (readonly) BOOL finished;

- (id)notificationName;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (BOOL)isFinished;
- (void)updateWithEvent:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (id)initWithStreamIdentifier:(id)a0;
- (void)getLatestEventWithCompletion:(id /* block */)a0;
- (id)latestEvent;
- (id)queueLabel;
- (id)schedulerIdentifier;
- (void)setupSink;

@end
