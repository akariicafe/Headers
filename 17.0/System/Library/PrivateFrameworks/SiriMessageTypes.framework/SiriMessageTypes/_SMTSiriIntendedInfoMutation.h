@class NSString, SMTSiriIntendedInfo, NSNumber;

@interface _SMTSiriIntendedInfoMutation : NSObject <SMTSiriIntendedInfoMutating> {
    SMTSiriIntendedInfo *_base;
    float _odldScore;
    float _aftmScore;
    float _spkrIdScore;
    float _lrnnScore;
    float _checkerScore;
    float _lrnnThreshold;
    float _lrnnScale;
    float _lrnnOffset;
    NSNumber *_invocationType;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOdldScore : 1; unsigned char hasAftmScore : 1; unsigned char hasSpkrIdScore : 1; unsigned char hasLrnnScore : 1; unsigned char hasCheckerScore : 1; unsigned char hasInvocationType : 1; unsigned char hasLrnnThreshold : 1; unsigned char hasLrnnScale : 1; unsigned char hasLrnnOffset : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setInvocationType:(id)a0;
- (void)setAftmScore:(float)a0;
- (void)setLrnnScore:(float)a0;
- (void)setOdldScore:(float)a0;
- (void)setCheckerScore:(float)a0;
- (void)setLrnnThreshold:(float)a0;
- (float)getCheckerScore;
- (void)setSpkrIdScore:(float)a0;
- (float)getAftmScore;
- (id)getInvocationType;
- (float)getLrnnOffset;
- (float)getLrnnScale;
- (float)getLrnnScore;
- (float)getLrnnThreshold;
- (float)getOdldScore;
- (float)getSpkrIdScore;
- (void)setLrnnOffset:(float)a0;
- (void)setLrnnScale:(float)a0;

@end
