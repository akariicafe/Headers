@class NSDate, NSObject;
@protocol OS_nw_connection;

@interface TCPConnectionProbe : TestProbe {
    NSObject<OS_nw_connection> *_connection;
    BOOL _connected;
    BOOL _shouldSendReply;
    NSDate *_startTime;
    double _elapsedTime;
}

- (void).cxx_destruct;
- (void)cancelTest:(id /* block */)a0;
- (void)testConection:(id)a0 port:(unsigned long long)a1 timeout:(double)a2 interfaceName:(id)a3 reply:(id /* block */)a4;

@end
