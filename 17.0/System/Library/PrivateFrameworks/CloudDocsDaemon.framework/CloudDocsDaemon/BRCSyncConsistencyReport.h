@class NSArray, NSError;

@interface BRCSyncConsistencyReport : NSObject

@property (readonly, nonatomic) NSArray *telemetryErrorEvents;
@property (readonly, nonatomic) NSArray *telemetryWarningEvents;
@property (readonly, nonatomic) BOOL wasAbleToRun;
@property (readonly, nonatomic) NSError *lastError;

+ (void)cleanupApfsSnapshotWithMountFD:(int)a0;
+ (void)_finishReport:(id)a0 session:(id)a1 temporaryDBURL:(id)a2 mountFD:(int)a3 completionHandler:(id /* block */)a4;
+ (void)cleanupApfsSnapshotWithMountPath:(id)a0;
+ (void)generateReportWithSession:(id)a0 mangledIDs:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;

@end
