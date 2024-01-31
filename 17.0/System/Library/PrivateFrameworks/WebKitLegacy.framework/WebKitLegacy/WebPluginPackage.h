@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (BOOL)load;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)bundle;
- (Class)viewFactory;

@end
