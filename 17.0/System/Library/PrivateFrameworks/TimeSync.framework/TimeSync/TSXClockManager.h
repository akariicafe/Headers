@class NSString, TSClockManager, TSXTranslationClock;

@interface TSXClockManager : TSXClient <TSXClockManagerClientProtocol> {
    TSClockManager *_clockManager;
}

@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;
@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) TSXTranslationClock *translationClock;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverProtocol;
+ (void)initialize;
+ (void)_setIsAvailable;
+ (id)serviceName;
+ (id)clientProtocol;
+ (void)_setIsUnavailable;

- (BOOL)removegPTPServicesWithError:(id *)a0;
- (id)initWithClockManager:(id)a0;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (void)updateTranslationClockTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;
- (BOOL)getConnectionForPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1 daemonPortClassName:(id *)a2 endpoint:(id *)a3;
- (void)interruptedConnection;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (id)availableClockIdentifiers;
- (id)exportedObject;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (void)changedTranslationClockMaster;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (void)updateTranslationClockLockState:(int)a0;
- (void).cxx_destruct;
- (void)updateTranslationClockState;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)getTimeSyncTimeIsMachAbsoluteTime;
- (unsigned long long)getTranslationClockIdentifier;
- (BOOL)getConnectionForClockWithClockIdentifier:(unsigned long long)a0 daemonClockClassName:(id *)a1 endpoint:(id *)a2;
- (unsigned long long)getTimeSyncTimeClockIdentifier;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;

@end
