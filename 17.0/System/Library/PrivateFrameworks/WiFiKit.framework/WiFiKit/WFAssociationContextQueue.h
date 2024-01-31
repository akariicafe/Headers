@class NSMutableArray;

@interface WFAssociationContextQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;

- (void)push:(id)a0;
- (void)removeAll;
- (id)init;
- (id)peek;
- (void).cxx_destruct;
- (id)pop;
- (void)_dumpQueue;

@end
