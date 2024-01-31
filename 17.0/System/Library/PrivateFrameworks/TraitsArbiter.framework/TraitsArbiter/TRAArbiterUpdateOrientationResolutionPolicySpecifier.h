@class NSArray, NSString, TRASettingsActuationContext, NSNumber;

@interface TRAArbiterUpdateOrientationResolutionPolicySpecifier : NSObject <TRAPreferencesStageResolutionPolicySpecifying>

@property (weak, nonatomic) NSArray *participantsUniqueIdentifiers;
@property (nonatomic) BOOL forceResolution;
@property (retain, nonatomic) TRASettingsActuationContext *actuationContext;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
