@class NSCache;

@interface STSPluginLoader : NSObject

@property (retain, nonatomic) NSCache *pluginCache;

- (id)init;
- (void).cxx_destruct;
- (id)pluginWithName:(id)a0;

@end
