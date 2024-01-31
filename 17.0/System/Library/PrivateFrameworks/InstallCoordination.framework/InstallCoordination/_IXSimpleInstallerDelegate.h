@class NSString, IXAppInstallCoordinator, NSURL;
@protocol IXInitiatingOrUpdatingCoordinator;

@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver>

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *coordinator;
@property (retain, nonatomic) NSURL *moveResultToURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
