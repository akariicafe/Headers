@class NSDictionary;

@interface AFEnablementConfiguration : NSObject

@property (readonly, nonatomic) BOOL requiresVoiceSelection;
@property (readonly, nonatomic) NSDictionary *voiceCountForRecognitionLanguage;
@property (readonly, nonatomic) BOOL voiceSelectionAllowsRandomSelection;
@property (readonly, retain, nonatomic) id /* block */ completionLoggingBlock;

- (void).cxx_destruct;
- (id)initWithRequiresVoiceSelection:(BOOL)a0 voiceSelectionAllowsChooseForMe:(BOOL)a1 voiceCountForRecognitionLanguage:(id)a2 completionLoggingBlock:(id /* block */)a3;
- (BOOL)requiresVoiceSelectionForRecognitionLanguage:(id)a0;

@end
