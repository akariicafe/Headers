@interface _IDSCompletionHandler : IDSDelegateInfo

@property (copy, nonatomic) id /* block */ handler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0 queue:(id)a1;

@end
