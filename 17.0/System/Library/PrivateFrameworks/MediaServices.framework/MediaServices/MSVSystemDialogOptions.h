@class NSString, NSURL, NSArray;

@interface MSVSystemDialogOptions : NSObject

@property (copy, nonatomic) NSString *alertHeader;
@property (copy, nonatomic) NSString *alertMessage;
@property (copy, nonatomic) NSURL *alertIconURL;
@property (copy, nonatomic) NSArray *allowedApplicationBundleIDs;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *alternateButtonTitle;
@property (nonatomic) BOOL showAsTopmost;
@property (nonatomic) BOOL forceModalAlertAppearance;
@property (nonatomic) BOOL showOnLockscreen;
@property (nonatomic) BOOL dismissOverlaysOnLockscreen;

- (void).cxx_destruct;

@end
