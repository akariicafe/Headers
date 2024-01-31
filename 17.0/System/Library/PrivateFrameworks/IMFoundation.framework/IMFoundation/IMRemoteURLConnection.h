@class NSString, IMURLRequestSession, NSURLRequest;

@interface IMRemoteURLConnection : NSObject

@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL loading;
@property (retain, nonatomic) IMURLRequestSession *URLSession;
@property BOOL requireIDSHost;
@property BOOL forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property BOOL shouldUsePipelining;
@property int concurrentConnections;
@property BOOL disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property BOOL shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) id /* block */ block;

- (void)load;
- (void)dealloc;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)_direct_load;
- (void)_direct_cancel;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;

@end
