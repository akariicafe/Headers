@class NSRunLoop, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSHTTPServer : NSObject <SSHTTPServerRequestHandlerDelegate> {
    NSMutableDictionary *_definedResponses;
    NSMutableArray *_incomingRequests;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct __CFSocket { } *_socket;
    NSRunLoop *_runLoop;
}

@property (readonly, nonatomic) BOOL allowsSecure;
@property (nonatomic) int downloadSpeed;
@property (nonatomic) short port;
@property (readonly, nonatomic) long long responsesDelivered;
@property (readonly, nonatomic) int state;
@property (nonatomic) BOOL verbose;

+ (id)sharedServer;
+ (BOOL)_isPortOccupied:(short)a0;

- (id)init;
- (void)dealloc;
- (BOOL)start;
- (void)requestDidFinish:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (id)_ipAddress;
- (id)serverURL;
- (void)_handleConnectWithType:(unsigned long long)a0 handle:(int)a1;
- (id /* block */)responseBlockForPath:(id)a0;
- (id)serverLocalhostURL;
- (void)setResponseForPath:(id)a0 handler:(id /* block */)a1;

@end
