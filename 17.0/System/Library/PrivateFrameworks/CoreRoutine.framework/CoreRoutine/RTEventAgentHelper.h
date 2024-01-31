@class NSString;

@interface RTEventAgentHelper : NSObject

@property (retain, nonatomic) NSString *restorationIdentifier;

+ (id)signingIdentifierFromSelf;
+ (BOOL)launchdManaged;

- (void).cxx_destruct;
- (id)initWithRestorationIdentifier:(id)a0;

@end
