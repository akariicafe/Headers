@interface IHKError : NSError

+ (id)errorWithCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
+ (id)errorWithCode:(long long)a0 message:(id)a1;

@end
