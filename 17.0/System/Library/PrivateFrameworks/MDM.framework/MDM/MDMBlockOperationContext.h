@class MDMBlockOperation;

@interface MDMBlockOperationContext : NSObject

@property (retain, nonatomic) MDMBlockOperation *operation;

- (void).cxx_destruct;
- (void)endBlockOperation;

@end
