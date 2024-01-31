@interface CoreAnalyticsReportOutlet : CaseReportOutlet

- (BOOL)publishReportForCase:(id)a0 options:(id)a1;
- (id)buildDiagnosticIncidentEventForCase:(id)a0;
- (id)closureTypeForClosure:(short)a0;
- (id)dampeningResultForDampeningType:(short)a0;
- (id)handledResultForDampeningType:(short)a0;

@end
