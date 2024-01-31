@class NSString;

@interface HMDAssertionLogEvent : HMMLogEvent <HMDDiagnosticReportLogging> {
    NSString *_description;
}

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *reason;

- (id)initWithReason:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
