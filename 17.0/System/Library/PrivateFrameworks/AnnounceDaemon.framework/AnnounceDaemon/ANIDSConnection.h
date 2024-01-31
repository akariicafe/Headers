@class NSMutableDictionary, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue, ANConnectionDelegate;

@interface ANIDSConnection : NSObject <IDSServiceDelegate, ANIDSConnectionProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *idsQueue;
@property (retain, nonatomic) NSMutableDictionary *outgoingMessages;
@property (weak, nonatomic) id<ANConnectionDelegate> delegate;
@property (readonly, nonatomic) IDSService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)purgeTemporaryFiles;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)sendMessage:(id)a0 messageUUIDString:(id)a1 destination:(id)a2;

@end
