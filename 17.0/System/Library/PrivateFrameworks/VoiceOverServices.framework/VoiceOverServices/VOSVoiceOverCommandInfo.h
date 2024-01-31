@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject {
    NSDictionary *_brailleCommands;
}

- (void).cxx_destruct;
- (id)localizedNameForCategory:(id)a0;
- (void)_loadBrailleCommandsIfNecessary;
- (id)brailleCommandsForCategory:(id)a0;
- (id)brailleVoiceOverCategories;
- (id)localizedNameForCommand:(id)a0;

@end
