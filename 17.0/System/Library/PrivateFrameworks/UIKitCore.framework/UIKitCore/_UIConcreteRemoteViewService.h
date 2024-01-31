@class NSUUID, NSExtension;
@protocol PKPlugIn;

@interface _UIConcreteRemoteViewService : _UIRemoteViewService {
    BOOL _overridesHostAppearance;
    NSUUID *_contextToken;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<PKPlugIn> plugin;

- (id)contextToken;
- (void)beginUsing:(id /* block */)a0;
- (id)viewControllerClassName;
- (id)identifier;
- (id)multipleInstanceUUID;
- (void)endUsing:(id /* block */)a0;
- (void).cxx_destruct;
- (int)processIdentifier;
- (id)initWithExtension:(id)a0 andContextToken:(id)a1;
- (BOOL)multipleInstances;
- (BOOL)overridesHostAppearance;
- (void)updateOverridesHostAppearance;
- (id)xpcServiceNameRoot;

@end
