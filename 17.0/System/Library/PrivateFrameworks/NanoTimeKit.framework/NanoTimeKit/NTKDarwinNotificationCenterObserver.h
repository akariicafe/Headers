@class NSString, NSObject;

@interface NTKDarwinNotificationCenterObserver : NSObject

@property (weak, nonatomic) NSObject *observerObject;
@property (copy, nonatomic) NSString *notificationName;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
