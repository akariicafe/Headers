@class SBWindowedAccessoryViewController, SBWindow, NSString;

@interface SBAccessoryController : NSObject <SBWindowedAccessoryViewControllerDelegate>

@property (retain, nonatomic) SBWindowedAccessoryViewController *windowedAccessoryViewController;
@property (readonly, nonatomic) SBWindow *window;
@property (readonly, nonatomic, getter=isWindowedAccessoryWindowVisible) BOOL windowedAccessoryWindowVisiblevisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

@end
