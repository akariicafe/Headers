@class NSString, HDProfile;
@protocol ACHTemplateEntitySyncedTemplatesObserver;

@interface ACHTemplateEntityWrapper : NSObject <ACHTemplateEntitySyncedTemplatesObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) id<ACHTemplateEntitySyncedTemplatesObserver> syncedTemplatesObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (BOOL)removeTemplates:(id)a0 error:(id *)a1;
- (void)templateEntityDidReceiveSyncedTemplates:(id)a0 provenance:(long long)a1;
- (id)allTemplatesWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)insertTemplates:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 error:(id *)a3;

@end
