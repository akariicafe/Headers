@class NSData, NSString, VCNetworkFeedbackController, NSDictionary, VCSecurityKeyManager, NSObject, VCAudioCaptionsCoordinator, VCSessionMediaNegotiator;
@protocol OS_nw_activity;

@interface VCSessionParticipantConfig : NSObject {
    struct __CFDictionary { } *_spatialMetadataEntryMap;
    void *_spatialMetadata;
}

@property (retain, nonatomic) NSData *participantData;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL screenEnabled;
@property (nonatomic) BOOL screenControlEnabled;
@property (nonatomic) BOOL frequencyMeteringEnabled;
@property (nonatomic) BOOL audioMuted;
@property (nonatomic) BOOL outOfProcessCodecsEnabled;
@property (nonatomic) float volume;
@property (nonatomic) float audioPosition;
@property (nonatomic) BOOL audioPaused;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (retain, nonatomic) NSData *positionalInfo;
@property (nonatomic) void *spatialMetadata;
@property (nonatomic) struct __CFDictionary { } *spatialMetadataEntryMap;
@property (nonatomic) int processId;
@property (retain, nonatomic) VCSessionMediaNegotiator *mediaNegotiator;
@property (retain, nonatomic) VCSecurityKeyManager *securityKeyManager;
@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) NSString *idsDestination;
@property (nonatomic) unsigned int transportSessionID;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) BOOL isLowLatencyAudio;
@property (nonatomic) long long sessionMode;
@property (nonatomic) BOOL isOneToOneModeEnabled;
@property (nonatomic) NSObject<OS_nw_activity> *nwActivity;
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController;
@property (retain, nonatomic) NSDictionary *mediaStates;
@property (retain, nonatomic) VCAudioCaptionsCoordinator *captionsCoordinator;
@property (nonatomic) BOOL isServerRTxEnabled;
@property (nonatomic) BOOL isUplinkRetransmissionEnabled;

- (void)dealloc;
- (id)description;
- (void)cleanupNwActivity;

@end
