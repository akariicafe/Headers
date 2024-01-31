@class NSString, NSURLRequest, NSObject;
@protocol OS_xpc_object;

@interface IDSRemoteURLConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    BOOL _cancelled;
    BOOL _loading;
    int _retries;
}

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

+ (id)alloc;

- (void)load;
- (BOOL)_disconnect;
- (void)dealloc;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_connect;
- (void)_disconnected;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;

@end
