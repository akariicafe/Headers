@class NSString, NSSet, BSSettings, FBSSceneSettings;

@interface FBSSceneSnapshotContext : NSObject <BSXPCCoding, BSDescriptionProviding>

@property (copy, nonatomic) FBSSceneSettings *settings;
@property (readonly, copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSSet *layersToExclude;
@property (nonatomic) double expirationInterval;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithSceneID:(id)a0 settings:(id)a1;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithSceneID:(id)a0 settings:(id)a1;
- (id)succinctDescription;

@end
