@class NSObject;
@protocol OS_dispatch_queue;

@interface BioLog : BioLogBase {
    NSObject<OS_dispatch_queue> *_logQueue;
}

- (id)details;
- (void)logDelegateRegistered:(BOOL)a0 fromClient:(id)a1;
- (void)logFingerDetectStartWithOptions:(id)a0 fromClient:(id)a1;
- (void)logThermalLevel:(unsigned char)a0;
- (void)logAsync:(id)a0 withDetails:(id)a1 timestamp:(unsigned long long)a2 endingWithToken:(char *)a3;
- (id)init;
- (id)packAllLogs;
- (void)logSKSLockState:(unsigned short)a0 forUser:(unsigned int)a1 withTimestamp:(unsigned long long)a2;
- (void)logEnrollResultIdentity:(id)a0 withTimestamp:(unsigned long long)a1 forClients:(id)a2;
- (void)logMatchStartError:(int)a0;
- (void)logPowerState:(BOOL)a0 withTimestamp:(unsigned long long)a1;
- (void)logSensorRecoveryReason:(unsigned int)a0 withTimestamp:(unsigned long long)a1;
- (void)logProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 fromClient:(id)a2;
- (void)logKernelMessage:(id)a0;
- (void)logDisplayState:(BOOL)a0 withTimestamp:(unsigned long long)a1;
- (void)logRemoveIdentity:(id)a0 withError:(int)a1;
- (void)logProtectedConfigurationError:(int)a0;
- (id)packCurrentLog;
- (void)logDisconnectingClient:(id)a0;
- (id)logQueue;
- (void)closeLogFile;
- (void)logMatchStartFromClient:(id)a0;
- (void)dispatchLogEventAsync:(id /* block */)a0 withCurrentTimestamp:(BOOL)a1;
- (void)logSensorStatus:(id)a0;
- (void)logGetMaxIdentityCount:(int)a0 fromClient:(id)a1;
- (void)logUpdateIdentity:(id)a0 withOptions:(id)a1 fromClient:(id)a2;
- (void)logCancelError:(int)a0;
- (void)logEnrollStartForUser:(unsigned int)a0 fromClient:(id)a1;
- (void)logFingerDetectStartError:(int)a0;
- (void)logStatusMessage:(int)a0 withData:(id)a1 timestamp:(unsigned long long)a2 forClients:(id)a3;
- (void)logTemplateListFromIdentities:(id)a0;
- (void)logCall:(SEL)a0 withError:(int)a1;
- (void)logCall:(SEL)a0 withParameters:(id)a1 fromClient:(id)a2;
- (void)logSaveTemplateListError:(int)a0;
- (void)logMatchStart:(id)a0 withOptions:(id)a1 fromClient:(id)a2;
- (void)logRemoveIdentity:(id)a0 withOptions:(id)a1 fromClient:(id)a2 withTimestamp:(unsigned long long)a3;
- (void)logSaveTemplateListWithDetails:(id)a0;
- (void)logEnrollStartError:(int)a0;
- (void)logHomeButtonState:(BOOL)a0 fromKernel:(BOOL)a1 withTimestamp:(unsigned long long)a2;
- (void)logLogStart;
- (void).cxx_destruct;
- (id)attachmentsFromCurrentLog;
- (void)logRemoveAllIdentitiesForUser:(unsigned int)a0 withOptions:(id)a1 fromClient:(id)a2;
- (void)logUnlockedStateWithIdentities:(id)a0;
- (id)attachmentsFromAllLogs;
- (void)logWakeGestureState:(long long)a0;
- (void)logGetIdentityFromUUID:(id)a0 fromClient:(id)a1;
- (void)logGetIdentities:(id)a0 fromClient:(id)a1;
- (void)logUpdateIdentity:(id)a0 withError:(int)a1;
- (void)logMatchResultIdentity:(id)a0 withDetails:(id)a1 timestamp:(unsigned long long)a2 forClients:(id)a3;
- (void)logCancelFromClient:(id)a0;

@end
