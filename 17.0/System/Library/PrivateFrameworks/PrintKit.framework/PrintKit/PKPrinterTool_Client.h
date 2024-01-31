@class NSFileHandle, NSXPCConnection;

@interface PKPrinterTool_Client : NSObject {
    NSXPCConnection *_conn;
    NSFileHandle *_streamHandle;
}

+ (id)sharedClient;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancelJob:(int)a0;
- (void)printerTool_removeKeychainItem:(id)a0;
- (void)browseInfoForPrinter:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)endpointResolve:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)getJobAttributesForPrintdJobID:(int)a0 completionHandler:(id /* block */)a1;
- (void)getLastUsedPrintersForCurrentNetworkCompletionHandler:(id /* block */)a0;
- (id)getResponseForCurrentRequest:(BOOL)a0;
- (void)getResponseForCurrentRequest:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)printerTool_checkAccessState:(id)a0 completionHandler:(id /* block */)a1;
- (void)printerTool_getPrinterDescription:(id)a0 completionHandler:(id /* block */)a1;
- (void)printerTool_identifyPrinter:(id)a0 message:(id)a1 actions:(id)a2;
- (void)printerTool_queryPrinter:(id)a0 attributes:(id)a1 completionHandler:(id /* block */)a2;
- (void)printerTool_realPathForTmp:(id /* block */)a0;
- (id)ptConn;
- (BOOL)sendPayloadForCurrentRequest:(id)a0;
- (void)setLastUsedPrintersForCurrentNetwork:(id)a0;
- (BOOL)startStreamingRequest:(id)a0;
- (void)startStreamingRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
