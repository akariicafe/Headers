@class TTSFirstPartyAudioUnit;

@interface TTSAUMessagingAU : NSObject <AUMessageChannel>

@property (copy, nonatomic) id /* block */ hostBlock;
@property (weak, nonatomic) TTSFirstPartyAudioUnit *owningAudioUnit;
@property (copy, nonatomic) id /* block */ callHostBlock;

- (void).cxx_destruct;
- (id)echo:(id)a0;
- (id)callAudioUnit:(id)a0;

@end
