@interface _DPDiagnosticDataReporter : NSObject

+ (id)parsecReportSubmissionKey;
+ (id)daReportSubmissionKey;
+ (void)addValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (id)blacklistFileRemovalKey;
+ (void)clearDPKey:(id)a0 scalarKeyPrefix:(id)a1;
+ (id)diagnosticReportKeyFor:(id)a0 scalerKeyPrefix:(id)a1;
+ (id)staleReportFileRemovalKey;
+ (id)staleRecordRemovalKey;
+ (id)budgetUpdateKey;
+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (id)blacklistFileCreationKey;
+ (id)IOTrackingPrefix;
+ (void)setValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (id)submittedRecordRemovalKey;
+ (void)clearScalarKey:(id)a0;

@end
