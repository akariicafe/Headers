@class NSString, HDSyncEntityIdentifier;

@interface HDUnprotectedNanoUserDefaultsSyncEntity : HDNanoUserDefaultsSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (BOOL)supportsSpeculativeNanoSyncChanges;


@end
