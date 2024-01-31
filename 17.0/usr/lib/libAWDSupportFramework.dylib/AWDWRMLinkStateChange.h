@class NSString;

@interface AWDWRMLinkStateChange : PBCodable <NSCopying> {
    struct { unsigned char mModeStateDuration : 1; unsigned char timestamp : 1; unsigned char btRssi : 1; unsigned char ccAssertion : 1; unsigned char enableCMAS : 1; unsigned char enableTelephony : 1; unsigned char isTriggeredByProximityChange : 1; unsigned char mModeState : 1; unsigned char newLinkState : 1; unsigned char oldLinkState : 1; unsigned char prevMModeState : 1; unsigned char siriApp : 1; unsigned char wifiProximity : 1; unsigned char wifiRssi : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasSiriApp;
@property (nonatomic) unsigned int siriApp;
@property (nonatomic) BOOL hasIsTriggeredByProximityChange;
@property (nonatomic) unsigned int isTriggeredByProximityChange;
@property (nonatomic) BOOL hasOldLinkState;
@property (nonatomic) unsigned int oldLinkState;
@property (nonatomic) BOOL hasNewLinkState;
@property (nonatomic) unsigned int newLinkState;
@property (nonatomic) BOOL hasWifiProximity;
@property (nonatomic) unsigned int wifiProximity;
@property (nonatomic) BOOL hasCcAssertion;
@property (nonatomic) unsigned int ccAssertion;
@property (nonatomic) BOOL hasEnableCMAS;
@property (nonatomic) unsigned int enableCMAS;
@property (nonatomic) BOOL hasEnableTelephony;
@property (nonatomic) unsigned int enableTelephony;
@property (nonatomic) BOOL hasWifiRssi;
@property (nonatomic) int wifiRssi;
@property (nonatomic) BOOL hasBtRssi;
@property (nonatomic) int btRssi;
@property (nonatomic) BOOL hasMModeState;
@property (nonatomic) unsigned int mModeState;
@property (nonatomic) BOOL hasMModeStateDuration;
@property (nonatomic) unsigned long long mModeStateDuration;
@property (nonatomic) BOOL hasPrevMModeState;
@property (nonatomic) unsigned int prevMModeState;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
