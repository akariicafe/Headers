@interface CRXUNotificationCenter : NSObject

+ (id)sharedInstance;

- (void)removeObserver:(int)a0;
- (void)postNotificationName:(id)a0;
- (int)addBlockObserver:(id /* block */)a0 queue:(id)a1 name:(id)a2;
- (int)addObserver:(id)a0 selector:(SEL)a1 queue:(id)a2 name:(id)a3;

@end
