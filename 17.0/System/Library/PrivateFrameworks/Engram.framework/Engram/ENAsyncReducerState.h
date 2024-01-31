@class NSArray, CUTResult;

@interface ENAsyncReducerState : NSObject

@property (retain, nonatomic) NSArray *visitedItems;
@property (retain, nonatomic) NSArray *pendingItems;
@property (retain, nonatomic) id currentItem;
@property (retain, nonatomic) CUTResult *currentResult;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ stopBlock;

- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)continueWithResult:(id)a0;
- (void)stopWithResult:(id)a0;

@end
