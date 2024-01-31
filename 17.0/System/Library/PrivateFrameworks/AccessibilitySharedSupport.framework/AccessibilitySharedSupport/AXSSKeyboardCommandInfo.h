@interface AXSSKeyboardCommandInfo : NSObject

@property (readonly, nonatomic) BOOL handlesBothDownAndUp;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) id /* block */ downHandler;
@property (readonly, nonatomic) id /* block */ upHandler;

+ (id)infoWithDownHandler:(id /* block */)a0 upHandler:(id /* block */)a1;
+ (id)infoWithHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)_initWithHandler:(id /* block */)a0 downHandler:(id /* block */)a1 upHandler:(id /* block */)a2 handlesBothDownAndUp:(BOOL)a3;

@end
