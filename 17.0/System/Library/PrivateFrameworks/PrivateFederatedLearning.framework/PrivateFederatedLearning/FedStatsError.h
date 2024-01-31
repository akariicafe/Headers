@interface FedStatsError : NSObject

+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;
+ (id)errorWithCode:(long long)a0 underlyingErrors:(id)a1 description:(id)a2;

@end
