@class NSArray, IDSBaseMessage, CUTDeferredTaskQueue, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject {
    CUTDeferredTaskQueue *_timeoutTask;
}

@property (retain) NSMutableArray *_queue;
@property (retain) NSMutableArray *_addDates;
@property (readonly) IDSBaseMessage *topMessage;
@property (readonly) long long count;
@property (readonly) NSArray *messages;
@property (weak) id<FTMessageQueueDelegate> delegate;

- (id)init;
- (void)_clearTimeout;
- (id)messageForUniqueID:(unsigned long long)a0;
- (id)dequeueTopMessage;
- (BOOL)removeMessage:(id)a0;
- (void)_setTimeout;
- (void)_timeoutHit;
- (void).cxx_destruct;
- (BOOL)addMessageAtHeadOfQueue:(id)a0;
- (void)removeAllMessages;
- (BOOL)addMessage:(id)a0;

@end
