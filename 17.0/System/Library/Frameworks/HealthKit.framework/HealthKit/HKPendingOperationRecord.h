@interface HKPendingOperationRecord : NSObject

@property (readonly, copy, nonatomic) id /* block */ operationHandler;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long errorCount;

+ (id)pendingOperation:(id /* block */)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;

@end
