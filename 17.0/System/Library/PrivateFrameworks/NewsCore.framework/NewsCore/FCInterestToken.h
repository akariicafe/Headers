@interface FCInterestToken : NSObject

@property (copy, nonatomic) id /* block */ removeInterestBlock;

+ (id)interestTokenWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
+ (id)interestTokenWithRemoveInterestBlock:(id /* block */)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;

@end
