@protocol NPKPassUserNotificationFactoryDataSource;

@interface NPKPassUserNotificationFactory : NSObject

@property (weak, nonatomic) id<NPKPassUserNotificationFactoryDataSource> dataSource;

- (id)init;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)passNotificationWithType:(unsigned long long)a0 passUniqueID:(id)a1;

@end
