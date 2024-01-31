@class NSError;
@protocol NSSecureCoding;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<NSSecureCoding> remoteRequestOperationResponse;
@property (retain, nonatomic) NSError *remoteRequestOperationError;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRemoteRequestOperationResponse:(id)a0 remoteRequestOperationError:(id)a1;
- (id)initWithCoder:(id)a0;

@end
