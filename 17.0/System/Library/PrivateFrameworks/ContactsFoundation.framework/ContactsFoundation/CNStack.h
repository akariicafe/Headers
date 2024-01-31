@class NSMutableArray;

@interface CNStack : NSObject {
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) id peek;
@property (readonly, nonatomic) unsigned long long count;

- (void)push:(id)a0;
- (void)popAllWithHandler:(id /* block */)a0;
- (id)init;
- (void)popWithHandler:(id /* block */)a0;
- (id)popAll;
- (void).cxx_destruct;
- (id)pop;
- (void)removeObject:(id)a0;

@end
