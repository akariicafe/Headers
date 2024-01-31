@class NSString;

@interface MIPluginDataContainer : MIDataContainer

@property (copy, nonatomic) NSString *parentBundleID;

+ (id)pluginDataContainerWithIdentifier:(id)a0 forPersona:(id)a1 createIfNeeded:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;

- (void).cxx_destruct;

@end
