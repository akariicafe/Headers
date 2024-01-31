@class NSString, HDSyncEntityIdentifier;

@interface HDUserCharacteristicSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (void)didReceiveValuesForKeys:(id)a0 profile:(id)a1;
+ (int)nanoSyncObjectType;
+ (BOOL)supportsSpeculativeNanoSyncChanges;


@end
