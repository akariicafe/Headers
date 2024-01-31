@class NSString, NSObject;
@protocol OS_os_log;

@interface _STKClass0SMSResponseProvider : NSObject <STKAlertSessionResponseProvider> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *logger;
@property (readonly, nonatomic) BOOL hasSentResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
