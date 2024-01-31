@class NSArray, AVAudioMixInternal;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInternal *_audioMix;
}

@property (readonly, copy, nonatomic) NSArray *inputParameters;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)audioMixInputParametersForTrackID:(int)a0;
- (void)setInputParameters:(id)a0;

@end
