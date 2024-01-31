@class NSObject;
@protocol OS_xpc_object;

@interface MCMResultOperationDelete : MCMResultWithContainersArrayBase

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcToMerge;

- (void).cxx_destruct;
- (BOOL)encodeResultOntoReply:(id)a0;
- (void)mergeWithXPCResult:(id)a0;

@end
