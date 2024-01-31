@class NSString;

@interface SKAccountPageHandler : NSObject <SKAccountPageViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)accountPageViewControllerDidFinish:(id)a0;

@end
