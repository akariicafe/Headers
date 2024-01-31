@class NSString, IXDemotingAppInstallCoordinator;

@interface _IXDemoteToPlaceholderDelegate : NSObject <IXAppInstallCoordinatorObserver>

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IXDemotingAppInstallCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)coordinator:(id)a0 canceledWithReason:(id)a1 client:(unsigned long long)a2;
- (void)coordinatorDidCompleteSuccessfully:(id)a0 forApplicationRecord:(id)a1;

@end
