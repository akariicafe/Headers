@class NSString;

@interface SubscriptionAssertion : NSManagedObject

@property (class, readonly, nonatomic) NSString *applicationIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *channelIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *statusTypeIdentifierKeyPath;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *statusTypeIdentifier;

+ (id)fetchRequest;
+ (id)predicateForApplicationIdentifier:(id)a0;
+ (id)predicateForChannelIdentifier:(id)a0;
+ (id)predicateForStatusTypeIdentifier:(id)a0;

@end
