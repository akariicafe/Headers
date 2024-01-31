@class NSString, _UNNotificationContact;

@interface _UNNotificationContactServiceRecord : NSObject

@property (retain, nonatomic) _UNNotificationContact *contact;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
