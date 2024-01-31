@interface RTUserSessionMonitor : RTNotifier

@property (nonatomic) BOOL previouslyActiveUser;
@property (readonly, getter=activeUser) BOOL activeUser;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsNotificationName:(id)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)init;
- (unsigned int)uid;

@end
