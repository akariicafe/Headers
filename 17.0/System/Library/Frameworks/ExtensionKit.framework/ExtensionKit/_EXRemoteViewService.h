@class NSUUID, _EXExtensionProcessHandle;

@interface _EXRemoteViewService : _UIRemoteViewService {
    NSUUID *_contextToken;
}

@property (readonly) _EXExtensionProcessHandle *extensionProcess;

- (id)contextToken;
- (void)beginUsing:(id /* block */)a0;
- (id)viewControllerClassName;
- (id)identifier;
- (void)endUsing:(id /* block */)a0;
- (void).cxx_destruct;
- (int)processIdentifier;
- (BOOL)multipleInstances;
- (BOOL)overridesHostAppearance;
- (id)xpcServiceNameRoot;
- (id)initWithExtensionProcess:(id)a0 contextToken:(id)a1;
- (id)multipleInstancesUUID;

@end
