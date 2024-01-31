@class NSString, NSDictionary, NSMutableDictionary, CMIOExtensionClient;

@interface CMIOExtensionProviderProperties : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_propertiesDictionary;
    CMIOExtensionClient *_client;
}

@property (retain) NSString *name;
@property (retain) NSString *manufacturer;
@property (copy) NSDictionary *propertiesDictionary;

+ (id)providerPropertiesWithDictionary:(id)a0;

- (void)dealloc;
- (id)client;
- (id)initWithDictionary:(id)a0;
- (id)initWithPropertyValues:(id)a0 client:(id)a1;
- (void)setPropertyState:(id)a0 forProperty:(id)a1;

@end
