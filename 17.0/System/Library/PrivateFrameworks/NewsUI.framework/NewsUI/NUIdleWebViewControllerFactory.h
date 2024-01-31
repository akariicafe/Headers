@class NSString;

@interface NUIdleWebViewControllerFactory : NSObject <NUWebViewControllerFactoryType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createViewControllerForURL:(id)a0;

@end
