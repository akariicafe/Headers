@class NSNumber, NSString;

@interface SBTraitsUserInterfaceStyleDefaultResolver : SBTraitsUserInterfaceStyleStageComponent <TRAPreferencesStageResolving>

@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resolveStagePreferencesWithContext:(id)a0 preferencesTree:(id)a1;

@end
