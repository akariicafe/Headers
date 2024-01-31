@class NSString;
@protocol LANotificationObserverXPC;

@interface LANotificationProxy : NSObject <LANotificationObserverXPC>

@property (readonly, weak, nonatomic) id<LANotificationObserverXPC> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)newValue:(id)a0 oldValue:(id)a1 completionHandler:(id /* block */)a2;

@end
