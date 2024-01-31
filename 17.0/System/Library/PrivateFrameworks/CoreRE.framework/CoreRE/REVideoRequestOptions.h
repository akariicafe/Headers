@class NSObject;
@protocol OS_xpc_object;

@interface REVideoRequestOptions : REResourceRequestOptions

@property (readonly, nonatomic) NSObject<OS_xpc_object> *receiverEndpoint;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithReceiverEndpoint:(id)a0;

@end
