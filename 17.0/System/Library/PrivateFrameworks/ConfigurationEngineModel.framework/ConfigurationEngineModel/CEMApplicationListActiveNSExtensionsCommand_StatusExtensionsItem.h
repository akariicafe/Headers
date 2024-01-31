@class NSSet, NSString;

@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusBundleIdentifier;
@property (copy, nonatomic) NSString *statusExtensionPoint;
@property (copy, nonatomic) NSString *statusDisplayName;
@property (copy, nonatomic) NSString *statusContainerDisplayName;
@property (copy, nonatomic) NSString *statusContainerIdentifier;
@property (copy, nonatomic) NSString *statusPath;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusUserElection;

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)a0 withExtensionPoint:(id)a1 withDisplayName:(id)a2 withPath:(id)a3 withVersion:(id)a4 withUserElection:(id)a5;
+ (id)buildWithBundleIdentifier:(id)a0 withExtensionPoint:(id)a1 withDisplayName:(id)a2 withContainerDisplayName:(id)a3 withContainerIdentifier:(id)a4 withPath:(id)a5 withVersion:(id)a6 withUserElection:(id)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
