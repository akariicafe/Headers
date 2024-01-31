@interface SNOperatorUtils : NSObject

+ (BOOL)checkOperatorEventIsValidGivenInput:(id)a0 terminationError:(id)a1;
+ (id /* block */)downstreamHandlerForwardingToOther:(id /* block */)a0 portID:(id)a1;
+ (id /* block */)ignoreDownstreamHandler;
+ (BOOL)sendEventToDownstreamHandler:(id /* block */)a0 toPortID:(id)a1 input:(id)a2 terminationError:(id)a3 throughOptionalOperator:(id)a4 operatorPortID:(id)a5 error:(id *)a6;
+ (BOOL)sendEventToOperator:(id)a0 portID:(id)a1 input:(id)a2 terminationError:(id)a3 downstreamHandler:(id /* block */)a4 error:(id *)a5;
+ (BOOL)validateOperatorEventIsValidGivenInput:(id)a0 terminationError:(id)a1 error:(id *)a2;

- (id)init;

@end
