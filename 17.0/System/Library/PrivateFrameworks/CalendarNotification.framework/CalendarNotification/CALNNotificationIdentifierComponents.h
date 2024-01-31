@class NSString;

@interface CALNNotificationIdentifierComponents : NSObject

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;

@end
