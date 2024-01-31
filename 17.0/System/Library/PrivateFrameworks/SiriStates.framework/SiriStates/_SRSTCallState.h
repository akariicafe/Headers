@class NSString;

@interface _SRSTCallState : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ eventHandler;
}

@property (class, nonatomic, readonly) _SRSTCallState *ongoingCall;
@property (class, nonatomic, readonly) _SRSTCallState *micMutedCall;
@property (class, nonatomic, readonly) _SRSTCallState *noCall;
@property (class, nonatomic, readonly) _SRSTCallState *onHoldCall;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makeProxy;

@end
