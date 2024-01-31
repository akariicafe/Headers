@class NSString;

@interface AMSPushParsableBadging : NSObject <AMSPushParsable>

@property (class, readonly, nonatomic) BOOL shouldSkipAccountCheck;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_performLegacyCallbackWithRequest:(id)a0 payload:(id)a1 config:(id)a2 bag:(id)a3 error:(id *)a4;
+ (void)handleNotificationPayload:(id)a0 config:(id)a1 bag:(id)a2;


@end
