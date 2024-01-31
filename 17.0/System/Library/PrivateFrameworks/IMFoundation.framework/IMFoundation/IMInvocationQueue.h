@class NSProtocolChecker, NSMutableArray, Protocol;

@interface IMInvocationQueue : NSObject

@property (readonly, nonatomic) BOOL holdQueue;
@property (readonly, retain, nonatomic) NSMutableArray *queue;
@property (readonly, retain, nonatomic) NSMutableArray *options;
@property (readonly, retain, nonatomic) NSProtocolChecker *protocolChecker;
@property (retain, nonatomic) Protocol *protocol;
@property id target;
@property id delegate;
@property (nonatomic) double dequeueRate;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long count;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)dealloc;
- (id)peek;
- (BOOL)_acceptsOptions:(unsigned long long)a0;
- (int)_maxQueueLimitSize;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)_replaceSimilarInvocation:(id)a0;
- (void)_releaseQueueNotification:(id)a0;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)invokeAll;
- (void)_holdQueueNotification:(id)a0;
- (void)_stepQueueNotification:(id)a0;
- (BOOL)_invokeInvocation:(id)a0;
- (BOOL)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (int)_numberOfLimitedMessagesInQueue;
- (id)_dequeueInvocation;
- (void)_checkQueue;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (void)_setQueueTimer;
- (void)removeAllInvocations;

@end
