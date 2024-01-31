@interface SNError : NSObject

+ (void)autoreleasepoolWithError:(id *)a0 action:(id /* block */)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 message:(id)a2;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 underlyingError:(id)a2 message:(id)a3;
+ (void)populateClientError:(id *)a0 withCode:(long long)a1 underlyingError:(id)a2 message:(id)a3;
+ (void)populateClientError:(id *)a0 withDomain:(id)a1 code:(long long)a2 underlyingError:(id)a3 message:(id)a4;
+ (void)wrapClientError:(id *)a0 withDomain:(id)a1 code:(long long)a2 message:(id)a3;

- (id)init;

@end
