@class NSString, UIImage;

@interface SXBlockActionActivity : NSObject <SXActionActivity>

@property (readonly, copy, nonatomic) id /* block */ genericBlock;
@property (readonly, copy, nonatomic) id /* block */ immediateBlock;
@property (readonly, copy, nonatomic) id /* block */ userSelectedBlock;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 image:(id)a1 type:(unsigned long long)a2 block:(id /* block */)a3;
- (id)initWithLabel:(id)a0 type:(unsigned long long)a1 block:(id /* block */)a2;
- (id)initWithLabel:(id)a0 type:(unsigned long long)a1 immediateBlock:(id /* block */)a2 userSelectedBlock:(id /* block */)a3;
- (void)invokeWithAction:(id)a0 invocationMethod:(unsigned long long)a1;

@end
