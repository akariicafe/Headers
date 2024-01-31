@class NSSet, NSString, INUIRemoteViewController;
@protocol INUICKPInterfaceSectionOrganizing, CRKCardSectionViewControllingDelegate, INUICKPSynchronousRemoteViewControllerDelegate;

@interface INUICKPSynchronousRemoteViewController : UIViewController <INUICKPSynchronousRemoteViewDelegate, CRKCardSectionViewControlling, INUIRemoteViewControllerDelegate>

@property (weak, nonatomic) id<INUICKPSynchronousRemoteViewControllerDelegate> delegate;
@property (retain, nonatomic) INUIRemoteViewController *remoteViewController;
@property (weak, nonatomic) id<INUICKPInterfaceSectionOrganizing> interfaceSectionOrganizer;
@property (readonly, copy, nonatomic) NSSet *cachedRepresentedParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;

+ (void)requestInstanceWithInfo:(id)a0 configuration:(id)a1 synchronousRemoteViewControllerDelegate:(id)a2 reply:(id /* block */)a3;

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_interaction;
- (id)interfaceSectionsForRemoteViewController:(id)a0;
- (id)maximumSizesBySystemVersionForRemoteViewController:(id)a0;
- (id)minimumSizesBySystemVersionForRemoteViewController:(id)a0;
- (void)remoteViewControllerServiceDidTerminate:(id)a0;
- (id)_minimumSizesBySystemVersion;
- (struct CGSize { double x0; double x1; })cachedSizeForSynchronousRemoteView:(id)a0;

@end
