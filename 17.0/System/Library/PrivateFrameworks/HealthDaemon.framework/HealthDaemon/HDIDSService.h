@class IDSService, NSString, NSObject;
@protocol OS_dispatch_queue, HDIDSServiceDelegate;

@interface HDIDSService : NSObject <IDSServiceDelegate> {
    NSString *_serviceIdentifier;
    NSString *_shortServiceIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) IDSService *service;
@property (nonatomic) BOOL unitTest_sendOnEmptyDestinationSet;
@property (weak, nonatomic) id<HDIDSServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)initWithServiceName:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0 destination:(id)a1 options:(id)a2 identifier:(id *)a3 error:(id *)a4;

@end
