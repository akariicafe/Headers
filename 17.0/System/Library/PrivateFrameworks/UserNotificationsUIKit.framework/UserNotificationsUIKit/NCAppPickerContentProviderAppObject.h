@class NSString;

@interface NCAppPickerContentProviderAppObject : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long avgNumberOfNotifications;

- (void).cxx_destruct;

@end
