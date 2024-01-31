@class NSUUID, NSString, STActivityAttribution;

@interface CMIOExtensionClient : NSObject <NSCopying> {
    struct { unsigned int val[8]; } _auditToken;
    STActivityAttribution *_stAttribution;
    BOOL _isToProxy;
    BOOL _isFromProxyExtensionManager;
    long long _microphoneAuthorizationStatus;
    long long _cameraAuthorizationStatus;
    BOOL _hasPendingMicrophoneAuthorizationRequest;
    BOOL _hasPendingCameraAuthorizationRequest;
    NSString *_description;
    NSString *_redactedDescription;
}

@property (readonly, copy) NSUUID *clientID;
@property (readonly, copy) NSString *signingID;
@property (readonly) int pid;

+ (id)clientInfoWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isToProxy:(BOOL)a4 isFromProxyExtensionManager:(BOOL)a5;

- (unsigned long long)hash;
- (void)dealloc;
- (id)redactedDescription;
- (id)initWithXPCDictionary:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)description;
- (long long)authorizationStatusForMediaType:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)cameraAuthorizationStatus;
- (id)copyXPCDictionary;
- (BOOL)hasPendingCameraAuthorizationRequest;
- (BOOL)hasPendingMicrophoneAuthorizationRequest;
- (id)initWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isToProxy:(BOOL)a4 isFromProxyExtensionManager:(BOOL)a5;
- (BOOL)isFromProxyExtensionManager;
- (BOOL)isToProxy;
- (long long)microphoneAuthorizationStatus;
- (void)requestAccessForMediaType:(unsigned int)a0 performPreFlightTest:(BOOL)a1 reply:(id /* block */)a2;
- (void)requestAccessForMediaType:(unsigned int)a0 reply:(id /* block */)a1;
- (void)setCameraAuthorizationStatus:(long long)a0;
- (void)setHasPendingCameraAuthorizationRequest:(BOOL)a0;
- (void)setHasPendingMicrophoneAuthorizationRequest:(BOOL)a0;
- (void)setMicrophoneAuthorizationStatus:(long long)a0;

@end
