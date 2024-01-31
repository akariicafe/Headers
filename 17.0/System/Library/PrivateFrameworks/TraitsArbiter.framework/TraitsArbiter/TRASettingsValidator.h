@class NSString, TRASettingsOrientation;

@interface TRASettingsValidator : NSObject <TRASettingsValidating>

@property (nonatomic, getter=didValidateOrientationSettings) BOOL orientationSettingsValidated;
@property (copy, nonatomic) NSString *orientationSettingsValidatedReason;
@property (copy, nonatomic) TRASettingsOrientation *orientationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)validateOrientationSettingsWithBlock:(id /* block */)a0;

@end
