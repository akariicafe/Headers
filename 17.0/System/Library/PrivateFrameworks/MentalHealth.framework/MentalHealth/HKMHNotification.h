@class NSString;

@interface HKMHNotification : NSObject

@property (readonly, nonatomic) NSString *category;

+ (id)allNotificationCategories;
+ (id)notificationCategoryForString:(id)a0;

- (id)initWithCategory:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
