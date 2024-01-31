@class NSString;

@interface AMSPushParsableEngagementEvent : NSObject <AMSPushParsable>

@property (class, readonly, nonatomic) BOOL shouldSkipAccountCheck;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_eventForMapiPayload:(id)a0 account:(id)a1 bag:(id)a2;
+ (id)_eventForStaticAssetPayload:(id)a0 bag:(id)a1;
+ (void)_waitForPromises:(id)a0 completion:(id /* block */)a1;
+ (void)handleNotificationPayload:(id)a0 config:(id)a1 bag:(id)a2;


@end
