@class NSString, HDSyncEntityIdentifier;
@protocol ACHTemplateEntitySyncedTemplatesObserver;

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>

@property (class, weak, nonatomic) id<ACHTemplateEntitySyncedTemplatesObserver> syncedTemplatesObserver;
@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (BOOL)insertTemplates:(id)a0 provenance:(long long)a1 useLegacySyncIdentity:(BOOL)a2 profile:(id)a3 databaseContext:(id)a4 error:(id *)a5;
+ (id)_templateWithUniqueName:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (int)currentSyncVersion;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)removeTemplates:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)_removeTemplates:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)supportsSyncStore:(id)a0;
+ (BOOL)_removeTemplateWithPersistentID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (struct { int x0; int x1; })syncVersionRangeForSession:(id)a0;
+ (struct { int x0; int x1; })supportedSyncVersionRange;
+ (BOOL)_journalTemplates:(id)a0 provenance:(long long)a1 useLegacySyncIdentity:(BOOL)a2 action:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (id)codableTemplateForTemplateInDatabase:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncProvenance;
+ (id)_templatesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)_insertTemplates:(id)a0 provenance:(long long)a1 useLegacySyncIdentity:(BOOL)a2 profile:(id)a3 databaseContext:(id)a4 error:(id *)a5;
+ (id)decodeSyncObjectWithData:(id)a0;
+ (BOOL)_insertTemplate:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2 database:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)allTemplatesWithProfile:(id)a0 error:(id *)a1;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;


@end
