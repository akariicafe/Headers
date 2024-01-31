@class IDSKVDeleteContext;

@interface IMDReplayStorageIterationContext : NSObject

@property (retain, nonatomic) IDSKVDeleteContext *deleteContext;

- (void)dealloc;

@end
