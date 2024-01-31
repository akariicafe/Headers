@class CKDContainerServerInfo, NSObject;
@protocol OS_dispatch_group;

@interface CKDContainerSpecificInfoOperation : CKDOperation

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (void)setCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)shouldCheckAppVersion;

@end
