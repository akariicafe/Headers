@class NSDictionary;
@protocol PKPrintdRPC_BrowseClient_ClientProtocol;

@interface PKPrintdRPC_BrowseClient : PKPrinterTool_Client {
    NSDictionary *_infoDictionary;
    unsigned long long _provenance;
    id<PKPrintdRPC_BrowseClient_ClientProtocol> _delegate;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)startBrowsing;
- (id)initWithInfo:(id)a0 provenance:(unsigned long long)a1 delegate:(id)a2;
- (id)ptConn;

@end
