@class SFSSTTSEngine;

@interface SFSSDeviceTTSTask : SFSpeechSynthesisTask

@property (weak, nonatomic) SFSSTTSEngine *ttsEngine;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelTask;
- (void)startTask:(id /* block */)a0;

@end
