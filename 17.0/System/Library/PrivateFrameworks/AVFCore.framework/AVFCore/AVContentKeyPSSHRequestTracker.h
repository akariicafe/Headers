@class NSMutableArray;

@interface AVContentKeyPSSHRequestTracker : NSObject {
    long long _totalExpectedRequestCount;
    NSMutableArray *_requests;
}

- (id)requests;
- (void)dealloc;
- (void)addRequest:(id)a0;
- (BOOL)haveAllRequestsBeenReceived;
- (id)initWithRequestCount:(long long)a0;

@end
