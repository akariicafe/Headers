@interface _UIViewBlockVisitor : _UIViewVisitor

@property (copy, nonatomic) id /* block */ visitorBlock;

- (void)dealloc;
- (id)initWithTraversalDirection:(unsigned long long)a0 visitorBlock:(id /* block */)a1;
- (BOOL)_visitView:(id)a0;

@end
