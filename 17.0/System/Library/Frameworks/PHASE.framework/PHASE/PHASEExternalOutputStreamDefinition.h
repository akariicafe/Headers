@class AVAudioFormat, PHASEExternalStreamCollection;

@interface PHASEExternalOutputStreamDefinition : NSObject

@property (readonly, nonatomic) long long streamType;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) unsigned int maximumFramesToRender;
@property (readonly, nonatomic) unsigned int audioSessionToken;
@property (readonly, nonatomic) PHASEExternalStreamCollection *streamCollection;
@property (readonly, nonatomic) unsigned long long streamIndex;

+ (id)new;

- (id)init;
- (void)setFormat:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setMaximumFramesToRender:(unsigned int)a0;
- (id)initWithStreamCollection:(id)a0 index:(unsigned long long)a1 format:(id)a2 maximumFramesToRender:(unsigned int)a3 audioSessionToken:(unsigned int)a4;
- (id)initWithStreamType:(long long)a0 format:(id)a1 maximumFramesToRender:(unsigned int)a2;
- (id)initWithStreamType:(long long)a0 format:(id)a1 maximumFramesToRender:(unsigned int)a2 audioSessionToken:(unsigned int)a3;

@end
