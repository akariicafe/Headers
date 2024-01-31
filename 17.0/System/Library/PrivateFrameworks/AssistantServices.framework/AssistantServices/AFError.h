@interface AFError : NSObject

+ (id)errorWithCode:(long long)a0 description:(id)a1 underlyingError:(id)a2;
+ (id)new;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 description:(id)a1 underlyingErrors:(id)a2;

- (id)init;

@end
