@class NSObject;
@protocol OS_xpc_object;

@interface MCMResultRelay : MCMResultBase

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReplyFromRelay;

- (void).cxx_destruct;
- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithXPCReplyFromRelay:(id)a0;

@end
