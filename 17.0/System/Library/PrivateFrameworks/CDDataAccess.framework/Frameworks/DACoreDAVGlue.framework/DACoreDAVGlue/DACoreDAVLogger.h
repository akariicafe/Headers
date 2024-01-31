@class NSString;

@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerDefaultLoggerWithCoreDAV;

- (long long)coreDAVLogLevel;
- (void)coreDAVLogDiagnosticMessage:(id)a0 atLevel:(long long)a1;
- (void)coreDAVLogTransmittedDataPartial:(id)a0;
- (long long)coreDAVOutputLevel;
- (void)coreDAVTransmittedDataFinished;
- (BOOL)shouldLogTransmittedData;

@end
