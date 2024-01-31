@interface NFExceptionsCALogger : NSObject

+ (void)postAnalyticsReaderModeExceptionForType:(unsigned int)a0 tagType:(unsigned int)a1 rfFrameInterface:(BOOL)a2 withErrorCode:(unsigned int)a3;
+ (void)postAnalyticsCRSDeAuthWithStatus:(unsigned short)a0;
+ (void)postAnalyticsSERestrictedModeExited:(unsigned int)a0;
+ (void)postMiddlewareExceptionEvent:(unsigned int)a0 mwVersion:(unsigned int)a1 errorType:(unsigned int)a2 errorCode:(unsigned int)a3 breadcrumb:(unsigned long long)a4;
+ (void)postAnalyticsCRSAuthInitEventWithStatus:(unsigned short)a0;
+ (void)postAnalyticsMobileSoftwareUpdateExceptionEvent:(unsigned short)a0;
+ (void)postAnalyticsTSMConnectivityException:(unsigned int)a0;
+ (void)postHardwareExceptionEventWithAssertionCounter:(unsigned int)a0 hardwareType:(unsigned int)a1 wdogDump:(unsigned int *)a2 hwFltDump:(unsigned int *)a3;
+ (void)postAnalyticsVASTransactionException:(unsigned int)a0 withSWStatus:(unsigned short)a1;
+ (void)postAnalyticsOsResetEvent:(unsigned int)a0 osID:(unsigned int)a1 hardwareType:(unsigned int)a2;
+ (void)postAnalyticsCRSAuthWithStatus:(unsigned short)a0 withMethod:(unsigned int)a1;
+ (void)postAnalyticsSERestrictedModeEntered:(id)a0;
+ (void)postAnalyticsHciTransactionException:(id)a0 eventType:(id)a1 commandResult:(id)a2 status:(id)a3;
+ (void)postAnalyticsSERemovedEvent:(unsigned int)a0 hasExpressTransactionStarted:(BOOL)a1 hasCardEmulationStarted:(BOOL)a2 hardwareType:(unsigned int)a3;
+ (void)postCASERestrictedModeExited:(unsigned int)a0;
+ (void)postAnalyticsCRSAuthECommerceWithParameters:(id)a0;

@end
