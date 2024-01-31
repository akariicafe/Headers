@class NSString;

@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>

@property (retain, nonatomic) NSString *ckContainerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithSyncContext:(id)a0 ckContainerID:(id)a1;

@end
