@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface PBServerConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSXPCConnection *memberQ_serverConnection;
@property (readonly, nonatomic) NSXPCConnection *serverConnection;

+ (id)defaultConnection;
+ (void)simulateCrashReportForAuthorizationWithAuthenticationMessage:(id)a0;
+ (unsigned long long)beginListeningToPasteboardChangeNotifications;

- (id)serverConnection;
- (void)helloCompletionBlock:(id /* block */)a0;
- (id)pasteboardWithName:(id)a0 error:(id *)a1;
- (void)pasteboardWithName:(id)a0 createIfNeeded:(BOOL)a1 authenticationBlock:(id /* block */)a2 dataOwnerBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (id)init;
- (void)deletePersistentPasteboardWithName:(id)a0 completionBlock:(id /* block */)a1;
- (void)performJanitorialTasksCompletionBlock:(id /* block */)a0;
- (id)remoteContentForSlotStyle:(id)a0 pasteButtonTag:(id)a1 error:(id *)a2;
- (unsigned long long)deletePersistentPasteboardWithName:(id)a0 error:(id *)a1;
- (void)requestItemFromPasteboardWithName:(id)a0 UUID:(id)a1 authenticationMessage:(id)a2 itemIndex:(unsigned long long)a3 typeIdentifier:(id)a4 dataOwner:(long long)a5 loadContext:(id)a6 completionBlock:(id /* block */)a7;
- (void)didPastePasteboard:(id)a0;
- (void)pasteboardWithName:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)a0 dataOwnerBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)savePasteboard:(id)a0 dataProviderEndpoint:(id)a1 completionBlock:(id /* block */)a2;
- (void)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)requestPatternDetectionsFromPasteboardWithName:(id)a0 UUID:(id)a1 authenticationMessage:(id)a2 itemIndex:(unsigned long long)a3 patterns:(id)a4 needValues:(BOOL)a5 dataOwner:(long long)a6 completionBlock:(id /* block */)a7;
- (id)savePasteboard:(id)a0 dataProviderEndpoint:(id)a1 error:(id *)a2;
- (void)localGeneralPasteboardCompletionBlock:(id /* block */)a0;
- (id)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)a0 dataOwnerBlock:(id /* block */)a1 error:(id *)a2;
- (void)getAllPasteboardsCompletionBlock:(id /* block */)a0;
- (id)requestSecurePasteAuthenticationMessageWithContext:(unsigned long long)a0 forClientVersionedPID:(long long)a1 error:(id *)a2;
- (id)remoteContentForLayerContextWithId:(unsigned long long)a0 slotStyle:(id)a1 pasteButtonTag:(id)a2 error:(id *)a3;
- (id)pasteboardWithName:(id)a0 createIfNeeded:(BOOL)a1 authenticationBlock:(id /* block */)a2 dataOwnerBlock:(id /* block */)a3 error:(id *)a4;

@end
