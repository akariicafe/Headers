@class NSString, _SRSTState;

@interface _SRSTClient : NSObject {
    void /* unknown type, empty encoding */ _currentState;
    void /* unknown type, empty encoding */ _mostRecentEvent;
    void /* unknown type, empty encoding */ stopped;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) _SRSTState *currentState;
@property (nonatomic, readonly) NSString *mostRecentEventName;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dispatchEvent:(long long)a0;
- (void)stopClient;

@end
