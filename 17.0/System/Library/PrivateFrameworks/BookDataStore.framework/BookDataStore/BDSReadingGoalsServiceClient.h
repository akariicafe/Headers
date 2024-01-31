@protocol BDSServiceProtocol;

@interface BDSReadingGoalsServiceClient : NSObject

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;
@property (copy, nonatomic) id /* block */ onRemoteChange;

+ (void)clearLocalCachedDataWithCompletionHandler:(id /* block */)a0;
+ (id)sharedServiceProxy;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stateInfoWithCompletionHandler:(id /* block */)a0;
- (void)clearDataWithCompletionHandler:(id /* block */)a0;
- (void)_handleOnRemoteChange:(id)a0;
- (void)changeBooksFinishedGoalTo:(long long)a0 completionHandler:(id /* block */)a1;
- (void)changeDailyGoalTo:(double)a0 completionHandler:(id /* block */)a1;

@end
