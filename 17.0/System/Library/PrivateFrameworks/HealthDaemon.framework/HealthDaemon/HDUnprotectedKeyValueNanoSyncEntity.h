@class NSString, HDSyncEntityIdentifier;

@interface HDUnprotectedKeyValueNanoSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)supportsSyncStore:(id)a0;
+ (BOOL)supportsSpeculativeNanoSyncChanges;


@end
