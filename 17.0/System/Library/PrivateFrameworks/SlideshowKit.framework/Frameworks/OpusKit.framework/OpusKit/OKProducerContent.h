@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle

@property (nonatomic) OKProducerPlugin *plugin;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (BOOL)isLoaded;

@end
