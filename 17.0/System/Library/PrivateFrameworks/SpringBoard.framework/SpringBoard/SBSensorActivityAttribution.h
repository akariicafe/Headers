@class NSString;

@interface SBSensorActivityAttribution : SBActivityAttribution <SBFSensorActivityAttribution>

@property (readonly, nonatomic) long long sensor;
@property (readonly, nonatomic) BOOL usedRecently;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *attributionGroup;
@property (readonly, copy, nonatomic) NSString *website;
@property (readonly, nonatomic) BOOL isSystemService;
@property (readonly, copy, nonatomic) NSString *activeEntityBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *executableDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)initWithDataAccessAttribution:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;

@end
