@class NSString, NPSManager, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NCSInternalSettingsManager : NSObject {
    NSMutableArray *_complicationDefinitions;
    NPSManager *_syncManager;
    NSArray *_storedSettings;
    NSString *_selectedComplicationIdentifier;
}

@property (readonly, nonatomic) BOOL hasSettings;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *selectedComplicationIdentifier;

- (void)saveSettings;
- (id)init;
- (void).cxx_destruct;
- (void)loadSettings;
- (void)_saveSettings;
- (id)_localizedNameForComplication:(id)a0;
- (unsigned long long)_numberOfActiveComplications;
- (void)addComplicationDefinition:(id)a0;
- (id)complicationDefinitionForAppBundleIdentifier:(id)a0;
- (id)complicationDefinitionForComplicationIdentifier:(id)a0;
- (id)complicationDefinitionForWatchKitIdentifier:(id)a0;
- (id)complicationIdentifierForComplicationDefinitionAtIndex:(unsigned long long)a0;
- (void)enumerateAllComplicationDefinitionsUsingBlock:(id /* block */)a0;
- (void)enumerateComplicationDefinitionsUsingBlock:(id /* block */)a0;
- (void)moveComplicationDefinitionFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeComplicationDefinitionsInArray:(id)a0;

@end
