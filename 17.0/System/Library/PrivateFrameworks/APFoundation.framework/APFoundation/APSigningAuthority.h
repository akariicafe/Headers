@class NSString, APSigningContextsStorage, APSigningServerRequestor, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface APSigningAuthority : NSObject <APSigningAuthorizable>

@property (nonatomic) void *context;
@property (nonatomic) unsigned long long contextIdx;
@property (nonatomic) BOOL isStashed;
@property (nonatomic) BOOL tryStashed;
@property (nonatomic) BOOL isUsed;
@property (nonatomic) BOOL isPersisted;
@property (nonatomic) long long failureError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue;
@property (retain, nonatomic) APSigningServerRequestor *serverRequestor;
@property (retain, nonatomic) APSigningContextsStorage *signingContextsStorage;
@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;
@property (copy, nonatomic) id /* block */ setupCompletionHandler;
@property (nonatomic) double lastStateChangeTime;
@property (nonatomic) double setupStartTime;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isReboot;

- (id)init;
- (void)dealloc;
- (void)_setup;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)_createContext;
- (BOOL)_createAttribute:(void **)a0;
- (BOOL)_createContext:(void **)a0 withAttribute:(void **)a1 initRequest:(void **)a2 initRequestLength:(unsigned int *)a3;
- (void)_destroyObject:(void **)a0 ofType:(long long)a1;
- (id)_getEncodedStringFromFPDIDataRef:(void *)a0 withLength:(unsigned int)a1;
- (void)_handleInitResponse:(void *)a0 length:(unsigned int)a1 error:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_handleSetupResponse:(void *)a0 length:(unsigned int)a1 error:(id)a2;
- (void)_sendInitRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_sendSetupRequest:(id)a0;
- (void)_setFailureStateWithError:(long long)a0;
- (id)_signatureForData:(id)a0 error:(id *)a1;
- (id)initWithStoredContext:(unsigned long long)a0;
- (id)initWithTryStashed:(BOOL)a0;
- (id)initWithTryStashed:(BOOL)a0 signingServerRequestor:(id)a1 setupCompletionHandler:(id /* block */)a2;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (id)signatureForRawData:(id)a0 error:(id *)a1;
- (void)verifyStoredContext;

@end
