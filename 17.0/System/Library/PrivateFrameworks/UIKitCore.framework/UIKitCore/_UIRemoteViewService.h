@class NSString, NSUUID;

@interface _UIRemoteViewService : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *xpcServiceNameRoot;
@property (readonly, nonatomic) BOOL overridesHostAppearance;
@property (readonly, nonatomic) BOOL multipleInstances;
@property (readonly, nonatomic) NSUUID *multipleInstanceUUID;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *viewControllerClassName;
@property (readonly, copy, nonatomic) NSUUID *contextToken;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (void)beginUsing:(id /* block */)a0;
- (id)_init;
- (void)endUsing:(id /* block */)a0;
- (id)initWithPlugIn:(id)a0 andContextToken:(id)a1;
- (id)initWithExtension:(id)a0 andContextToken:(id)a1;

@end
