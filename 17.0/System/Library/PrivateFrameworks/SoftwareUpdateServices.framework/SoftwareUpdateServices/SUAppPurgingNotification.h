@class NSString;

@interface SUAppPurgingNotification : NSObject <SUAppPurgingNotification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)postAppPurgingNotificationWithCompletion:(id /* block */)a0;


@end
