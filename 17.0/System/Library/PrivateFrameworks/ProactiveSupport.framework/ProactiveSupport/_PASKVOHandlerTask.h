@class NSString, NSObject;

@interface _PASKVOHandlerTask : NSObject

@property (copy, nonatomic) NSString *keyPath;
@property (weak, nonatomic) NSObject *object;
@property (copy, nonatomic) id /* block */ afterBlock;
@property (copy, nonatomic) id /* block */ beforeAndAfterBlock;

- (void).cxx_destruct;

@end
