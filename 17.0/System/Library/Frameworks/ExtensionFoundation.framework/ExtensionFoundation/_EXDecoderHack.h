@interface _EXDecoderHack : NSCoder

@property (copy) id /* block */ contextFactory;

- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithContextFactory:(id /* block */)a0;

@end
