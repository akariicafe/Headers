@class TUCallCenter;

@interface SBConferenceManager : NSObject {
    BOOL _hasFaceTimeCapability;
    struct MGNotificationTokenStruct { } *_faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void)dealloc;
- (BOOL)hasFaceTimeCapability;
- (void)_faceTimeStateChanged:(id)a0;
- (BOOL)faceTimeInvitationExists;
- (BOOL)inFaceTimeVideo;
- (id)incomingFaceTimeCall;
- (id)activeFaceTimeCall;
- (void).cxx_destruct;
- (void)endFaceTime;
- (BOOL)faceTimeIsAvailable;
- (BOOL)activeFaceTimeCallExists;
- (id)currentFaceTimeCall;
- (BOOL)inFaceTime;
- (BOOL)canStartFaceTime;

@end
