@class NSString;
@protocol DOCDeprecatedUIMenuControllerMethods;

@interface DOCDeprecatedUIMenuController : NSObject

@property (class, readonly) id<DOCDeprecatedUIMenuControllerMethods> shared;
@property (class, readonly) NSString *willShowMenuNotification;
@property (class, readonly) NSString *willHideMenuNotification;

@end
