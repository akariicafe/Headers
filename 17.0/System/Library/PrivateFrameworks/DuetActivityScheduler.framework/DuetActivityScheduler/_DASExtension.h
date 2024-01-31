@class NSDate, NSString, _DASExtensionRemoteContext, NSObject, _DASActivity;
@protocol OS_os_transaction, OS_os_log, _DASExtensionRunner;

@interface _DASExtension : NSObject <NSExtensionRequestHandling>

@property (retain, nonatomic) _DASExtensionRemoteContext *context;
@property (retain, nonatomic) id<_DASExtensionRunner> runner;
@property (retain, nonatomic) _DASActivity *activity;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)suspend;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_activityCompletedWithStatus:(unsigned char)a0;
- (void)runner:(id)a0 performActivity:(id)a1;

@end
