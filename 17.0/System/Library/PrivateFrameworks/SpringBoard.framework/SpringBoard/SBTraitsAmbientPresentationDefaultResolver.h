@class NSString, NSNumber;

@interface SBTraitsAmbientPresentationDefaultResolver : SBTraitsAmbientPresentationStageComponent <TRAPreferencesStageResolving>

@property (copy, nonatomic) NSString *thresholdRole;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
