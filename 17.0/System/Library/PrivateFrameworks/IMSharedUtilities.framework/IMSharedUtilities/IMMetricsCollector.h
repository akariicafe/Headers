@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter *_diagnosticReporter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;

+ (id)sharedInstance;

- (void *)_ADClientSetValueForScalarKeyApiInit;
- (id)init;
- (void)dealloc;
- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void *)_ADClientPushValueForDistributionKeyApiInit;
- (void)_trackEvent:(id)a0;
- (void)metricAttachmentValidation:(BOOL)a0 attachmentSize:(id)a1 operationalErrorDomain:(id)a2 operationalErrorCode:(id)a3 validationErrorDomain:(id)a4 validationErrorCode:(id)a5;
- (BOOL)trackEvent:(id)a0;
- (void)trackSpamEvent:(unsigned long long)a0;
- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1 type:(id)a2 context:(id)a3;
- (void)_trackEvent:(id)a0 withStatistic:(id)a1;
- (void)_trackEvent:(id)a0 withDictionary:(id)a1;
- (void *)_ADClientAddValueForScalarKeyApiInit;
- (void)_trackEvent:(id)a0 withCount:(id)a1;
- (void)trackiMessageJunkEvent:(unsigned long long)a0;
- (BOOL)trackEvent:(id)a0 withCount:(id)a1;
- (BOOL)trackEvent:(id)a0 withStatistic:(id)a1;
- (BOOL)trackEvent:(id)a0 withDictionary:(id)a1;
- (void)trackSpamEvent:(unsigned long long)a0 withDictionary:(id)a1;
- (void)autoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void)trackiMessageJunkEvent:(unsigned long long)a0 withDictionary:(id)a1;
- (BOOL)trackAction:(id)a0 extensionBundleID:(id)a1 isNotification:(BOOL)a2;
- (id)_stringForSpamType:(unsigned long long)a0;
- (id)_stringForiMessageJunkType:(unsigned long long)a0;

@end
