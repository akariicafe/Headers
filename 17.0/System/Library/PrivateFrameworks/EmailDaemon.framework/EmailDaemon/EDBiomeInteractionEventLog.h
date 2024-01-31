@class NSString, BMSource, BMStoreStream, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDBiomeInteractionEventLog : NSObject <EFLoggable, EDInteractionEventLog> {
    NSObject<OS_dispatch_queue> *_queue;
    BMStoreStream *_stream;
    BMSource *_source;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)payloadFromData:(id)a0 message:(id)a1;

- (id)init;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1;
- (void)persistEvent:(id)a0 date:(id)a1 conversationID:(long long)a2 data:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 data:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailbox:(id)a3;
- (void)donateToBiomeWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1 account:(id)a2;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailboxType:(long long)a3;

@end
