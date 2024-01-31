@class NSString;

@interface DNDSAppSpecificSettingsTypeAppConfigurationTargetContentIdentifierPrefix : NSObject <DNDSAppSpecificSettingsType>

@property (class, readonly) NSString *appSpecificSettingsEntity;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)appSpecificSettingsEncodedClass;
+ (Class)appSpecificSettingsClass;
+ (id)appSpecificSettingsForManagedObject:(id)a0;
+ (id)appSpecificSettingsFromDictionaryRepresentation:(id)a0;
+ (void)completeManagedObject:(inout id)a0 forAppSpecificSettings:(id)a1;
+ (id)dictionaryRepresentationForAppSpecificSettings:(id)a0;


@end
