@class NSArray;

@interface CDMShortcutResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSArray *voiceCommandsUserParses;
@property (readonly, nonatomic) NSArray *autoShortcutParses;

- (void).cxx_destruct;
- (id)initWithVoiceCommandUserParses:(id)a0 autoShortcutParses:(id)a1;

@end
