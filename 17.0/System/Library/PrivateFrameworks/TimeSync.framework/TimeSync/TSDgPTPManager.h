@class IODConnection, TSDgPTPClock, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface TSDgPTPManager : NSObject {
    IOKService *_service;
    IODConnection *_connection;
    TSDgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
}

@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long copresencePTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier;
@property (readonly, retain, nonatomic) TSDgPTPClock *systemDomain;

+ (void)initialize;
+ (id)diagnosticInfo;
+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)a0;
+ (void)notifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)systemDomain;
- (BOOL)addCopresencePTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)logInterfaceStatisticsWithError:(id *)a0;
- (BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)removeAirPlayPTPInstanceWithError:(id *)a0;
- (BOOL)removeCopresencePTPInstanceWithError:(id *)a0;
- (BOOL)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;

@end
