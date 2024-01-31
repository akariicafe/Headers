@class NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTReplayUpdateTermination : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *path;
@property (retain, nonatomic) id<GTXPCConnection> connection;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
