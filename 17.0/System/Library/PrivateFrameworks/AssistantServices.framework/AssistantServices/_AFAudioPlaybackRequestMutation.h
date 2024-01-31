@class NSString, NSDictionary, NSURL, NSData, AFAudioPlaybackRequest;

@interface _AFAudioPlaybackRequestMutation : NSObject <AFAudioPlaybackRequestMutating> {
    AFAudioPlaybackRequest *_base;
    NSURL *_itemURL;
    NSData *_itemData;
    long long _numberOfLoops;
    float _volume;
    double _fadeInDuration;
    double _fadeOutDuration;
    NSDictionary *_userInfo;
    NSString *_hapticLibraryKey;
    NSString *_UUID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasItemURL : 1; unsigned char hasItemData : 1; unsigned char hasNumberOfLoops : 1; unsigned char hasVolume : 1; unsigned char hasFadeInDuration : 1; unsigned char hasFadeOutDuration : 1; unsigned char hasUserInfo : 1; unsigned char hasHapticLibraryKey : 1; unsigned char hasUUID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setVolume:(float)a0;
- (void)setItemURL:(id)a0;
- (BOOL)isDirty;
- (void)setFadeOutDuration:(double)a0;
- (void)setUUID:(id)a0;
- (void)setUserInfo:(id)a0;
- (void).cxx_destruct;
- (void)setFadeInDuration:(double)a0;
- (void)setNumberOfLoops:(long long)a0;
- (id)getUUID;
- (double)getFadeInDuration;
- (double)getFadeOutDuration;
- (id)getHapticLibraryKey;
- (id)getItemData;
- (id)getItemURL;
- (long long)getNumberOfLoops;
- (id)getUserInfo;
- (float)getVolume;
- (void)setHapticLibraryKey:(id)a0;
- (void)setItemData:(id)a0;

@end
