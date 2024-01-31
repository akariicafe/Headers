@class PHASESessionVolume;

@interface PHASEVolumeCommandForSession : PHASEVolumeCommand

@property (readonly, nonatomic) unsigned int audioSessionToken;
@property (readonly, nonatomic) PHASESessionVolume *volume;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSessionToken:(unsigned int)a0;
- (id)initInternalWithSessionToken:(unsigned int)a0 volume:(id)a1;
- (id)initWithSessionToken:(unsigned int)a0 volume:(id)a1;

@end
