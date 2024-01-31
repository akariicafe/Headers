@class UIColor, UIFont;

@interface STScreenTimeReportViewControllerFactory : NSObject

@property (class, readonly) UIFont *pickupsHeaderFont;
@property (class, readonly) UIColor *pickupsHeaderTextColor;

+ (id)makeReportViewControllerForContext:(id)a0 userAltDSID:(id)a1 deviceIdentifier:(id)a2;

@end
