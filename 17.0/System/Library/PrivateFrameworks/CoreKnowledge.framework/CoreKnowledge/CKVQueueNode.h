@interface CKVQueueNode : NSObject

@property (retain, nonatomic) id value;
@property (retain, nonatomic) CKVQueueNode *next;

- (void).cxx_destruct;

@end
