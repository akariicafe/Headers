@class NSString, AFCompanionDeviceInfo, NSDictionary;

@interface _AFCompanionDeviceInfoMutation : NSObject <AFCompanionDeviceInfoMutating> {
    AFCompanionDeviceInfo *_base;
    NSString *_assistantID;
    NSString *_speechID;
    NSString *_idsIdentifier;
    NSString *_productPrefix;
    NSString *_aceHost;
    NSDictionary *_syncMetadata;
    BOOL _syncMetadataCapability;
    BOOL _peerToPeerHandoffCapability;
    BOOL _muxSupportCapability;
    BOOL _meDevice;
    NSString *_siriLanguage;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAssistantID : 1; unsigned char hasSpeechID : 1; unsigned char hasIdsIdentifier : 1; unsigned char hasProductPrefix : 1; unsigned char hasAceHost : 1; unsigned char hasSyncMetadata : 1; unsigned char hasSyncMetadataCapability : 1; unsigned char hasPeerToPeerHandoffCapability : 1; unsigned char hasMuxSupportCapability : 1; unsigned char hasMeDevice : 1; unsigned char hasSiriLanguage : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setIdsIdentifier:(id)a0;
- (id)getIdsIdentifier;
- (void).cxx_destruct;
- (id)getSiriLanguage;
- (id)getSyncMetadata;
- (void)setAssistantID:(id)a0;
- (void)setPeerToPeerHandoffCapability:(BOOL)a0;
- (id)getAceHost;
- (id)getAssistantID;
- (BOOL)getMeDevice;
- (BOOL)getMuxSupportCapability;
- (BOOL)getPeerToPeerHandoffCapability;
- (id)getProductPrefix;
- (id)getSpeechID;
- (BOOL)getSyncMetadataCapability;
- (void)setAceHost:(id)a0;
- (void)setMeDevice:(BOOL)a0;
- (void)setMuxSupportCapability:(BOOL)a0;
- (void)setProductPrefix:(id)a0;
- (void)setSiriLanguage:(id)a0;
- (void)setSpeechID:(id)a0;
- (void)setSyncMetadata:(id)a0;
- (void)setSyncMetadataCapability:(BOOL)a0;

@end
