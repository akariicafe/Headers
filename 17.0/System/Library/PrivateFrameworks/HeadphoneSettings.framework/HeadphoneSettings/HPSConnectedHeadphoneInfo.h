@class NSString, UIImage, PSSpecifier;

@interface HPSConnectedHeadphoneInfo : NSObject

@property (readonly, retain) NSString *deviceID;
@property (readonly, retain) NSString *deviceName;
@property (readonly, retain) UIImage *deviceImage;
@property (readonly, retain) PSSpecifier *deviceSpecifier;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 name:(id)a1 image:(id)a2 specifier:(id)a3;

@end
