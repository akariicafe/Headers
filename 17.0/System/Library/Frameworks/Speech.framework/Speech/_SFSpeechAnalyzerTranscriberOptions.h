@class _SFTranscriberModelOptions, NSLocale;

@interface _SFSpeechAnalyzerTranscriberOptions : NSObject

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) _SFTranscriberModelOptions *modelOptions;
@property (nonatomic) unsigned long long transcriptionOptions;
@property (nonatomic) unsigned long long attributeOptions;

- (id)init;
- (void).cxx_destruct;

@end
