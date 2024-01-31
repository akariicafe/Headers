@class DSSharingPermissions, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, DSNavigationDelegate;

@interface DSPublicResourceSharingController : DSTableWelcomeController <DSController>

@property (retain, nonatomic) DSSharingPermissions *permissions;
@property (retain, nonatomic) NSMutableSet *selectedTypes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_updateTitle;
- (BOOL)shouldShow;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_updateButton;
- (void)_pushNextPane;
- (id)publicSharingTypeForIndexPath:(id)a0;
- (void)reloadTableViewData;
- (void)stopAllSharing;
- (void)stopSelectedSharing;
- (void)stopSharingFailedWithError:(id)a0;
- (void)stopSharingTypes:(id)a0 alertLabel:(id)a1 alertDetail:(id)a2;

@end
