@interface _EARCommandTagger : NSObject {
    struct unique_ptr<quasar::CommandTagger, std::default_delete<quasar::CommandTagger>> { struct __compressed_pair<quasar::CommandTagger *, std::default_delete<quasar::CommandTagger>> { struct CommandTagger *__value_; } __ptr_; } _tagger;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isParameterTag:(id)a0;
- (id)commandPhraseTagForIndex:(long long)a0;
- (id)commandTaggingFromRecognitionResult:(id)a0 activeCommands:(id)a1;
- (id)initWithConfiguration:(id)a0 usage:(long long)a1;
- (BOOL)isCommandPhraseTag:(id)a0;
- (id)parameterTagForIndex:(long long)a0;

@end
