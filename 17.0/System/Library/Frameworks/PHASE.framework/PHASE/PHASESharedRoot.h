@class AVAudioSession;

@interface PHASESharedRoot : PHASEObject {
    struct UniqueObjectId { unsigned long long mStorage[2]; } _sessionUUID;
}

@property (readonly) AVAudioSession *session;

- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0;
- (id)initWithEngine:(id)a0 entityType:(unsigned int)a1 shapes:(id)a2;
- (id)initWithEngine:(id)a0 session:(id)a1 sessionUUID:(id)a2;
- (id)initWithEngine:(id)a0 sessionUUID:(id)a1;

@end
