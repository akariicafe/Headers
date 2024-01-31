@interface HDSummarySharingDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (void)_reportDiagnosticsForProfileIdentifier:(id)a0;
- (void)_reportHeaderWithProfileIdentifiers:(id)a0;
- (void)_reportInvitationsForPrimaryProfile;
- (void)_reportProfileInformationForProfileIdentifier:(id)a0;
- (void)_reportSharedSummariesForProfileIdentifier:(id)a0;
- (id)reportFilename;

@end
