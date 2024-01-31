@class NSUUID, NSString, NSRecursiveLock, NSXPCConnection, NSLock, NSMutableDictionary, NSHashTable, NSMutableArray, NSNumber;

@interface NTKComplicationCollection : NSObject <NTKComplicationStoreClient> {
    NSXPCConnection *_connection;
    BOOL _registrationNeeded;
    NSNumber *_seqId;
    NSMutableDictionary *_localizeableSampleDataTemplates;
    NSRecursiveLock *_templatesLock;
    NSMutableDictionary *_complicationDescriptors;
    NSLock *_descriptorsLock;
    NSHashTable *_observers;
    NSMutableArray *_loadCallbacks;
    NSLock *_observersLock;
    BOOL _updatesSuspended;
    NSMutableArray *_updatesEnqueuedWhileSuspended;
}

@property (readonly, nonatomic) NSString *collectionIdentifier;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) BOOL hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_bundleForWatchKitAppID:(id)a0;
+ (id)lsSDKVersionForApplicationID:(id)a0;
+ (id)newApricotCollection;
+ (id)sharedBundleCollection;
+ (id)sharedRemoteCollection;

- (id)clients;
- (void)dealloc;
- (id)initWithCollectionIdentifier:(id)a0 deviceUUID:(id)a1;
- (void)removeObserver:(id)a0;
- (void)_handleConnectionInterrupted;
- (void)resumeUpdatesFromDaemon;
- (void)_registerIfNeeded;
- (void)suspendUpdatesFromDaemon;
- (void)_register;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_notifyLoaded;
- (void)_performOrEnqueueUpdate:(id /* block */)a0;
- (void)_notifyReloaded;
- (id)_fetchOrCreateSampleDataForClientIdentifier:(id)a0 descriptor:(id)a1 family:(long long)a2;
- (void)_notifyRemovedComplicationSampleTemplatesForClientIdentifier:(id)a0 descriptor:(id)a1;
- (void)_notifyUpdateComplicationDescriptorsForClientIdentifier:(id)a0;
- (void)_notifyUpdateComplicationSampleTemplateForClientIdentifier:(id)a0 descriptor:(id)a1;
- (void)_removeComplicationSampleTemplatesForClientIdentifier:(id)a0 descriptor:(id)a1;
- (id)_sampleDataForClientIdentifier:(id)a0 descriptor:(id)a1;
- (void)_sendToDaemonRemoveComplicationSampleTemplatesForClientIdentifier:(id)a0 descriptor:(id)a1;
- (void)_sendToDaemonUpdatedComplicationDescriptors:(id)a0 forClientIdentifier:(id)a1;
- (void)_sendToDaemonUpdatedSampleDataTemplate:(id)a0 forClientIdentifier:(id)a1 descriptor:(id)a2 family:(long long)a3;
- (void)_setComplicationDescriptors:(id)a0 forClientIdentifier:(id)a1;
- (void)_setLocalizedSampleTemplate:(id)a0 forClientIdentifier:(id)a1 descriptor:(id)a2 family:(long long)a3;
- (void)_setLocalizedSampleTemplateReference:(id)a0 forClientIdentifier:(id)a1 descriptor:(id)a2 family:(long long)a3;
- (void)_throwIfNotLoaded:(SEL)a0;
- (id)clientsSupportingFamily:(long long)a0;
- (id)complicationDescriptorsForClientIdentifier:(id)a0;
- (BOOL)hasSampleTemplateForClientIdentifier:(id)a0 descriptor:(id)a1 family:(long long)a2;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(id)a0 complicationDescriptors:(id)a1 seqId:(id)a2;
- (void)performAfterLoad:(id /* block */)a0;
- (void)removeAllComplicationSampleTemplatesExceptThoseWithClientIdentifiers:(id)a0;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(id)a0 descriptor:(id)a1;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(id)a0 descriptor:(id)a1 seqId:(id)a2;
- (id)sampleTemplateForClientIdentifier:(id)a0 descriptor:(id)a1 applicationID:(id)a2 family:(long long)a3;
- (void)setComplicationDescriptors:(id)a0 forClientIdentifier:(id)a1;
- (void)setLocalizableSampleTemplate:(id)a0 forClientIdentifier:(id)a1 descriptor:(id)a2 family:(long long)a3;
- (id)supportedTemplateFamiliesForClientIdentifier:(id)a0 descriptor:(id)a1;
- (void)updateComplicationDescriptors:(id)a0 forClientIdentifier:(id)a1 seqId:(id)a2;
- (void)updateSampleTemplateReference:(id)a0 forClientIdentifier:(id)a1 descriptor:(id)a2 family:(long long)a3 seqId:(id)a4;

@end
