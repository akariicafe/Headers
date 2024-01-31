@class AVAudioChannelLayout, PHASEListener;

@interface PHASEAmbientMixer : PHASEMixer {
    void *_actionTreeManager;
    struct UniqueObjectId { unsigned long long mStorage[2]; } _actionTreeObjectId;
    unsigned long long _submixHashName;
}

@property (readonly, nonatomic) PHASEListener *listener;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } orientation;
@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 listener:(id)a1 inputChannelLayout:(id)a2 orientation:(struct { })a3 engine:(id)a4 actionTreeObjectId:(struct UniqueObjectId { unsigned long long x0[2]; })a5;

@end
