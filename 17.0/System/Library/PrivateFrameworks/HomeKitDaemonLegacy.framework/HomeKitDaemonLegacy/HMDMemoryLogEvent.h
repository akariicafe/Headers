@class NSString;

@interface HMDMemoryLogEvent : HMMLogEvent <HMDDiagnosticReportLogging>

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly) long long reason;
@property (readonly) unsigned long long currentMemoryUsage;
@property (readonly) unsigned long long intervalMaxMemoryUsage;

- (id)init;
- (id)initWithReason:(long long)a0 currentMemoryUsage:(unsigned long long)a1 intervalMaxMemoryUsage:(unsigned long long)a2;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
