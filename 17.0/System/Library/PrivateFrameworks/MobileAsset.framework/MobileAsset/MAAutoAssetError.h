@interface MAAutoAssetError : NSObject

+ (id)summaryForCode:(long long)a0 fromOperation:(id)a1;
+ (id)buildError:(long long)a0 fromOperation:(id)a1 underlyingError:(id)a2 withDescription:(id)a3;

@end
