@class NSString, HDSyncEntityIdentifier;

@interface ACHBackCompatLegacyAchievementKeyValueSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (BOOL)setLegacyDataStoreValuesWithDictionary:(id)a0 profile:(id)a1 error:(id *)a2;


@end
