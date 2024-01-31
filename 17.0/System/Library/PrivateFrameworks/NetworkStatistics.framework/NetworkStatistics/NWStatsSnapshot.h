@class NSString, NSDictionary, NSUUID;

@interface NWStatsSnapshot : NSObject {
    unsigned int _flags;
    NSDictionary *_extensionDictionaries;
}

@property (retain, nonatomic) NSString *attributedEntity;
@property (retain, nonatomic) NSString *attributedExtension;
@property (nonatomic) int attributionReason;
@property (nonatomic) int snapshotReason;
@property (nonatomic) BOOL firstOccurrence;
@property (nonatomic) BOOL isADaemon;
@property (retain, nonatomic) NSString *delegateName;
@property (retain, nonatomic) NSDictionary *lookupResults;
@property (nonatomic) BOOL startAppStateIsForeground;
@property (nonatomic) BOOL startScreenStateOn;
@property (nonatomic) BOOL snapshotAppStateIsForeground;
@property (nonatomic) BOOL snapshotScreenStateOn;
@property (nonatomic) BOOL isTracker;
@property (nonatomic) BOOL isNonAppInitiated;
@property (nonatomic) BOOL isSilent;
@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSString *domainOwner;
@property (retain, nonatomic) NSString *domainTrackerContext;
@property (retain, nonatomic) NSString *domainAttributedBundleId;
@property (readonly, nonatomic) unsigned long long sourceIdentifier;
@property (readonly, nonatomic) BOOL lastOccurrence;
@property (readonly, nonatomic) unsigned long long eventFlags;
@property (readonly, nonatomic) NSString *snapshotReasonString;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *euuid;
@property (readonly, nonatomic) unsigned long long eupid;
@property (readonly, nonatomic) int epid;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) unsigned int personaID;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned long long uniqueProcessID;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *snapshotType;
@property (readonly, nonatomic) NSString *snapshotTypeLowerCase;
@property (readonly, nonatomic) BOOL attributedEntityIsBundleName;
@property (readonly, nonatomic) BOOL attributedEntityIsProcessName;
@property (readonly, nonatomic) NSString *attributionReasonString;
@property (retain, nonatomic) NSDictionary *extensions;

+ (void)initialize;
+ (double)_intervalWithContinuousTime:(unsigned long long)a0;
+ (double)_referenceIntervalWithContinuousTime:(unsigned long long)a0;

- (id)_createNSUUIDForBytes:(unsigned char[16])a0;
- (BOOL)changedEUUIDFromUUID;
- (BOOL)changedProcname;
- (BOOL)changedEUUID;
- (BOOL)changedEpid;
- (void).cxx_destruct;
- (void)setAppStateIsForeground:(BOOL)a0 screenStateOn:(BOOL)a1 startAppStateIsForeground:(BOOL)a2 startScreenStateOn:(BOOL)a3;
- (BOOL)changedOwnership;
- (BOOL)changedPid;
- (BOOL)changedUUID;
- (void)setDomainName:(id)a0 owner:(id)a1 context:(id)a2 attributedBundleId:(id)a3 isTracker:(BOOL)a4 isNonAppInitiated:(BOOL)a5 isSilent:(BOOL)a6;
- (void)setAttribution:(id)a0 derivation:(int)a1 delegateName:(id)a2 extensionName:(id)a3 isADaemon:(BOOL)a4;
- (id)extensionDictionaries;

@end
