@class NSString, UIImage, ACAccount, NSNumber;

@interface DMCSecondaryAccountViewModel : NSObject

@property (retain) ACAccount *account;
@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (retain) NSString *subtitle;
@property (retain) UIImage *icon;
@property (retain) NSString *reauthIdentifer;
@property (retain) NSString *reauthTitle;
@property (retain) NSNumber *reauthBadgeNumber;

- (void).cxx_destruct;

@end
