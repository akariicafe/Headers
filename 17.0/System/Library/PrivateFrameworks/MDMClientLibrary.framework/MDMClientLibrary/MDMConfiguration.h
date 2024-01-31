@class NSURL, NSUUID, NSString, NSArray, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface MDMConfiguration : NSObject <MDMConfigurationProtocol>

@property (retain, nonatomic) NSUUID *wallpaperConfigurationUUID;
@property (nonatomic) BOOL isUserEnrollment;
@property (nonatomic) BOOL supportUserChannel;
@property (retain, nonatomic) NSString *enrollmentID;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *easEnrollmentID;
@property (retain, nonatomic) NSString *rmAccountID;
@property (retain, nonatomic) NSString *enrollmentMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier;
@property (nonatomic) struct __SecIdentity { } *memberQueueIdentity;
@property (retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs;
@property (nonatomic) BOOL memberQueuePinningRevocationCheckRequired;
@property (nonatomic) BOOL memberQueueSignMessage;
@property (retain, nonatomic) NSString *memberQueueTopic;
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo;
@property (retain, nonatomic) NSNumber *memberQueuePollingInterval;
@property (retain, nonatomic) NSURL *memberQueueServerURL;
@property (retain, nonatomic) NSURL *memberQueueCheckInURL;
@property (copy, nonatomic) NSArray *memberQueueServerCapabilities;
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions;
@property (nonatomic) unsigned long long memberQueueAccessRights;
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS;
@property (retain, nonatomic) NSString *memberQueuePushMagic;

+ (id)getOrgTokenForMAID:(id *)a0;
+ (id)getTokenUnsupportedError;
+ (BOOL)isGetTokenSupportedByServer;
+ (id)sharedConfiguration;
+ (unsigned long long)getManagementStateForMAID;
+ (id)getWatchPairingTokenForPhoneID:(id)a0 watchID:(id)a1 securityToken:(id)a2 outError:(id *)a3;
+ (BOOL)isUserEnrollmentDisregardingIdentityPresence;

- (BOOL)_writeProperties:(id)a0 channelType:(unsigned long long)a1 error:(id *)a2;
- (id)init;
- (id)_mdmPropertiesFilePathForChannelType:(unsigned long long)a0;
- (void)refreshDetailsFromDisk;
- (id)_readPropertiesForChannelType:(unsigned long long)a0 createIfMissingFile:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)readConfigurationOutError:(id *)a0;
- (id)setPropertyForKey:(id)a0 value:(id)a1 channelType:(unsigned long long)a2;
- (id)getPropertyForKey:(id)a0 channelType:(unsigned long long)a1;
- (void)memberQueueForgetCurrentConfiguration;

@end
