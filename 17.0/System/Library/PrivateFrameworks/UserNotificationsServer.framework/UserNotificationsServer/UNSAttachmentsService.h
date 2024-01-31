@class UNSPendingNotificationRepository, NSString, UNSAttachmentsRepository, UNSNotificationSchedulingService, NSObject, UNSNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver, UNCAttachmentsService> {
    NSObject<OS_dispatch_queue> *_queue;
    UNSAttachmentsRepository *_attachmentsRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)a0;
+ (id)_notificationIdentifiersForNotificationRecords:(id)a0;
+ (id)_stagingDirectory;

- (id)resolveAttachmentsForRequest:(id)a0 bundleIdentifier:(id)a1 fromLocalClientConnection:(id)a2 error:(id *)a3;
- (id)_queue_resolvedURLForNotificationAttachment:(id)a0 request:(id)a1 bundleIdentifier:(id)a2 fromLocalClientConnection:(id)a3 orFromServiceExtensionOfBundleProxy:(id)a4 error:(id *)a5;
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)a0 bundleIdentifier:(id)a1;
- (void)notificationRepository:(id)a0 didPerformUpdates:(id)a1 forBundleIdentifier:(id)a2;
- (void)ensureIntegrityWithCompletionHandler:(id /* block */)a0;
- (void)pendingNotificationRepository:(id)a0 didPerformUpdates:(id)a1 forBundleIdentifier:(id)a2;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void)_notificationIdentifiersForBundleIdentifier:(id)a0 replyOnQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)a0 request:(id)a1 bundleIdentifier:(id)a2 fromLocalClientConnection:(id)a3 orFromServiceExtensionOfBundleProxy:(id)a4 error:(id *)a5;
- (void)_beginObservingNotificationChanges;
- (void).cxx_destruct;
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)a0 bundleIdentifier:(id)a1;
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)a0 request:(id)a1 bundleIdentifier:(id)a2 fromLocalClientConnection:(id)a3 orFromServiceExtensionOfBundleProxy:(id)a4 error:(id *)a5;
- (void)_repositoryDidPerformUpdates:(id)a0 forBundleIdentifier:(id)a1;
- (id)_temporaryAttachmentFileURL;
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)a0 bundleIdentifier:(id)a1 fromBundleProxyForServiceExtension:(id)a2;
- (void)_queue_ensureIntegrityWithCompletionHandler:(id /* block */)a0;
- (id)_queue_resolveAttachmentsForRequest:(id)a0 bundleIdentifier:(id)a1 fromLocalClientConnection:(id)a2 orFromServiceExtensionOfBundleProxy:(id)a3 continueOnFailure:(BOOL)a4 error:(id *)a5;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_applicationDidUninstall:(id)a0;
- (id)initWithAttachmentsRepository:(id)a0 notificationRepository:(id)a1 notificationSchedulingService:(id)a2 pendingNotificationRepository:(id)a3;

@end
