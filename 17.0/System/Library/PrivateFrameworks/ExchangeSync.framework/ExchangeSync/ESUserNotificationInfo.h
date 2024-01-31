@class NSString;

@interface ESUserNotificationInfo : NSObject {
    id /* block */ _handler;
}

@property (copy, nonatomic) NSString *groupIdentifier;

- (void)setHandler:(id /* block */)a0;
- (id /* block */)handler;
- (void).cxx_destruct;

@end
