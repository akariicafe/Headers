@class NSString;

@interface RCCancelHandler : NSObject <RCOperationCanceling>

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (weak, nonatomic) id weakTarget;
@property (retain, nonatomic) id strongTarget;
@property (nonatomic) SEL selector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cancelHandlerWithBlock:(id /* block */)a0;
+ (id)cancelHandlerWithStrongTarget:(id)a0 selector:(SEL)a1;
+ (id)cancelHandlerWithWeakTarget:(id)a0 selector:(SEL)a1;

- (id)initWithBlock:(id /* block */)a0;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStrongTarget:(id)a0 selector:(SEL)a1;

@end
