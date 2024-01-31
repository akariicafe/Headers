@class NSArray, NSOperationQueue;

@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)enqueueOperation:(id)a0;

@end
