@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (id)allEvents;
- (BOOL)isSequenceTerminated;
- (id)initWithEvents:(id)a0;

@end
