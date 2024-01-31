@class SVXActivationContext, NSString, NSUUID, SVXDeactivationContext, NSError, SVXTaskContext, SAUIListenAfterSpeakingBehavior;

@interface _SVXTaskContextMutation : NSObject <SVXTaskContextMutating> {
    SVXTaskContext *_baseModel;
    long long _origin;
    unsigned long long _timestamp;
    NSUUID *_sessionUUID;
    NSUUID *_requestUUID;
    NSString *_aceId;
    NSString *_refId;
    NSString *_dialogIdentifier;
    NSString *_dialogPhase;
    BOOL _isUUFR;
    BOOL _listensAfterSpeaking;
    SAUIListenAfterSpeakingBehavior *_listenAfterSpeakingBehavior;
    SVXActivationContext *_activationContext;
    SVXDeactivationContext *_deactivationContext;
    NSError *_error;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOrigin : 1; unsigned char hasTimestamp : 1; unsigned char hasSessionUUID : 1; unsigned char hasRequestUUID : 1; unsigned char hasAceId : 1; unsigned char hasRefId : 1; unsigned char hasDialogIdentifier : 1; unsigned char hasDialogPhase : 1; unsigned char hasIsUUFR : 1; unsigned char hasListensAfterSpeaking : 1; unsigned char hasListenAfterSpeakingBehavior : 1; unsigned char hasActivationContext : 1; unsigned char hasDeactivationContext : 1; unsigned char hasError : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRequestUUID:(id)a0;
- (id)init;
- (id)generate;
- (void)setOrigin:(long long)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setActivationContext:(id)a0;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)setSessionUUID:(id)a0;
- (void)setDialogPhase:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setAceId:(id)a0;
- (void)setDialogIdentifier:(id)a0;
- (void)setRefId:(id)a0;
- (void)setListenAfterSpeakingBehavior:(id)a0;
- (void)setDeactivationContext:(id)a0;
- (void)setIsUUFR:(BOOL)a0;
- (void)setListensAfterSpeaking:(BOOL)a0;

@end
