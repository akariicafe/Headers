@class NSNumber, NSString;
@protocol SBTraitsOrientationPolicySpecifierDataSource;

@interface SBTraitsOrientationDefaultResolutionPolicySpecifier : SBTraitsOrientationStageComponent <TRAPreferencesStageResolutionPolicySpecifying>

@property (weak, nonatomic) id<SBTraitsOrientationPolicySpecifierDataSource> dataSource;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;
- (id)initWithComponentOrder:(id)a0 dataSource:(id)a1;

@end
