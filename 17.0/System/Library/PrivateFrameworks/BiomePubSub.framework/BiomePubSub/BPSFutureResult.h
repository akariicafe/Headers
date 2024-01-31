@class NSError;

@interface BPSFutureResult : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) id value;

+ (id)failureWithError:(id)a0;
+ (id)successWithValue:(id)a0;

- (id)initWithState:(long long)a0 value:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
