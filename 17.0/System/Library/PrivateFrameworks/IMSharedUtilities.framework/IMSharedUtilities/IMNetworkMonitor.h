@class NSString;

@interface IMNetworkMonitor : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ networkAvailable;
}

@property (nonatomic, readonly) NSString *remoteHost;
@property (nonatomic, readonly) BOOL immediatelyReachable;

- (id)initWithRemoteHost:(id)a0 delegate:(id)a1;
- (void)clear;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
