@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup

@property (retain, nonatomic) NSSet *notificationTypeNamesToFetch;

- (id)copyGetTaskWithURL:(id)a0;
- (void).cxx_destruct;
- (id)copyAdditionalResourcePropertiesToFetch;
- (BOOL)shouldFetchResourceWithEtag:(id)a0 propertiesToValues:(id)a1;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 accountInfoProvider:(id)a3 taskManager:(id)a4;

@end
