@class NSString, NSDictionary, NSArray, CKPCSDiagnosticInformation;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSString *identityStatus;
@property (retain, nonatomic) NSDictionary *invalidPCSByZoneID;
@property (retain, nonatomic) NSDictionary *validPCSByZoneID;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo;

- (id)relevantZoneIDs;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (void)_handleRecordZoneFetch:(id)a0 zoneID:(id)a1 responseCode:(id)a2;

@end
