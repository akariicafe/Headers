@class NSMutableSet, NSString, NSURL, NSError, NSObject, DYIntKeyedDictionary;
@protocol OS_dispatch_queue;

@interface DYTransport : NSObject {
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_rootQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sendQueue;
    _Atomic unsigned int _messageCounter;
    _Atomic unsigned int _messageSendQueueDepth;
    BOOL _invalid;
    DYIntKeyedDictionary *_replyHandlersMap;
    void /* function */ *_dispatch_send;
    NSMutableSet *_sources;
}

@property (nonatomic) unsigned int interposerVersion;
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) BOOL invalid;
@property (readonly, retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL synchronous;
@property (nonatomic) BOOL prioritizeOutgoingMessages;

- (void)setTargetQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (id)connect;
- (void)invalidate;
- (id)description;
- (id)debugDescription;
- (void)_dispatchMessage:(id)a0;
- (long long)_sendMessage:(id)a0 error:(id *)a1;
- (void)drainQueue;
- (id)newSourceWithQueue:(id)a0;
- (BOOL)send:(id)a0 error:(id *)a1 replyQueue:(id)a2 timeout:(unsigned long long)a3 handler:(id /* block */)a4;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2 replyQueue:(id)a3 timeout:(unsigned long long)a4 handler:(id /* block */)a5;
- (BOOL)sendNewMessage:(int)a0 error:(id *)a1;
- (BOOL)_activateSource:(id)a0;
- (void)_cancelSource:(id)a0;
- (void)_handleReplyTimeout:(unsigned int)a0 count:(unsigned int)a1;
- (unsigned int)_nextMessageSerial;
- (BOOL)_packMessage:(id)a0 error:(id *)a1;
- (void)_scheduleInvalidation:(id)a0;
- (BOOL)relayMessage:(id)a0 error:(id *)a1;
- (BOOL)send:(id)a0 error:(id *)a1;
- (BOOL)sendNewMessage:(int)a0 error:(id *)a1 replyQueue:(id)a2 timeout:(unsigned long long)a3 handler:(id /* block */)a4;

@end
