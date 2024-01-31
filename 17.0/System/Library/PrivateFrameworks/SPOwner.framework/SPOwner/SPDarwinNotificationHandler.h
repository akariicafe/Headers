@interface SPDarwinNotificationHandler : NSObject

@property (nonatomic) int notifyToken;

- (void)dealloc;
- (id)initWithNotificationName:(id)a0 changeBlock:(id /* block */)a1;

@end
