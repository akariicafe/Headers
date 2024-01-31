@class NSString, NSArray, NSUUID, SFBLEDevice;

@interface SFDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) int audioRoutingScore;
@property (copy, nonatomic) NSArray *batteryInfo;
@property (retain, nonatomic) SFBLEDevice *bleDevice;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned char deviceActionType;
@property (nonatomic) unsigned char deviceClassCode;
@property (nonatomic) unsigned int deviceFlags;
@property (nonatomic) unsigned char deviceModelCode;
@property (nonatomic) long long distance;
@property (nonatomic) BOOL hasProblem;
@property (nonatomic) unsigned int hotspotInfo;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL needsSetup;
@property (nonatomic) BOOL paired;
@property (copy, nonatomic) NSString *requestSSID;
@property (nonatomic) BOOL testMode;
@property (nonatomic) BOOL wakeDevice;
@property (nonatomic) BOOL autoUnlockEnabled;
@property (nonatomic) BOOL autoUnlockWatch;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) BOOL duetSync;
@property (readonly, nonatomic) BOOL enhancedDiscovery;
@property (copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL idsIdentifierConflict;
@property (readonly, nonatomic) BOOL inDiscoverySession;
@property (nonatomic) BOOL isBLEDeviceReplaced;
@property (readonly, copy, nonatomic) NSString *mediaRemoteID;
@property (readonly, copy, nonatomic) NSString *mediaRouteID;
@property (readonly, nonatomic) BOOL needsAWDL;
@property (readonly, nonatomic) BOOL needsKeyboard;
@property (readonly, nonatomic) BOOL needsKeyboardOnly;
@property (readonly, nonatomic) unsigned long long problemFlags;
@property (readonly, nonatomic) NSString *rapportIdentifier;
@property (nonatomic) unsigned int systemPairState;
@property (nonatomic) BOOL watchLocked;
@property (readonly, nonatomic) BOOL wifiP2P;
@property (nonatomic) unsigned char osVersion;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)updateWithPairedPeer:(id)a0;
- (void).cxx_destruct;
- (void)updateWithRPIdentity:(id)a0;
- (void)updateWithBLEDevice:(id)a0;
- (id)initWithCoder:(id)a0;

@end
