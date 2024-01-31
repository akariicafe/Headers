@class NSMutableDictionary, NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMThreadSafeBalloonPluginMap : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSMutableDictionary *map;
@property (readonly, nonatomic) NSDictionary *dictionaryMapCopy;
@property (readonly, nonatomic) NSArray *allIdentifiers;
@property (readonly, nonatomic) NSArray *allPlugins;
@property (readonly, nonatomic) unsigned long long pluginCount;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)pluginForIdentifier:(id)a0;
- (id)initWithConcurrentDataQueue:(id)a0;
- (void)removePluginWithIdentifier:(id)a0;
- (void)removePluginsWithIdentifiers:(id)a0;
- (void)setPlugin:(id)a0 forIdentifier:(id)a1;
- (void)updateWithMap:(id)a0;

@end
