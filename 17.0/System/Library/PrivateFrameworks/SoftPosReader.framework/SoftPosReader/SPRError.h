@interface SPRError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)failureForCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 reason:(id)a1;
+ (id)errorWithCode:(long long)a0 reason:(id)a1 underlyingError:(id)a2;

@end
