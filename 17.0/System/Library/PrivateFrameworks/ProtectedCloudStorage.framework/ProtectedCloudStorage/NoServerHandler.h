@interface NoServerHandler : NSObject

@property (readonly) id /* block */ handler;

- (id)initWithHandler:(id /* block */)a0;
- (void)call;
- (void).cxx_destruct;

@end
