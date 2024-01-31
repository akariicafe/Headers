@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id object;
    NSDictionary *userInfo;
}

- (void)dealloc;
- (id)userInfo;
- (id)object;
- (id)name;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end
