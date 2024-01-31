@interface SPRMonitorManager : SPRObject

- (BOOL)ping;
- (BOOL)start;
- (BOOL)stop;
- (id)sendAuditLogsAndReturnError:(id *)a0;
- (id)sendIncidentLog:(id)a0 error:(id *)a1;
- (BOOL)storeAuditLog:(id)a0 error:(id *)a1;

@end
