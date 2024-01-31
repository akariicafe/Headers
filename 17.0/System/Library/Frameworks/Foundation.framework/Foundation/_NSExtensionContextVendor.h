@interface _NSExtensionContextVendor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_extensionDictionary;
+ (Class)_extensionContextClass;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionMainStoryboard;
+ (void)_startListening:(BOOL)a0;

- (id)init;
- (id)_init;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (id)_extensionContextForUUID:(id)a0;
- (void)_tearDownContextWithUUID:(id)a0;

@end
