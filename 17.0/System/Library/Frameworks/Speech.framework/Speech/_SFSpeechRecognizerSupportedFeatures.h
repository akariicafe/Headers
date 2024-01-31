@class NSString, NSSet, _SFSpeechRecognizerModelOptions, NSLocale, EARVoiceCommandActiveSet;

@interface _SFSpeechRecognizerSupportedFeatures : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *languageIdentifier;
@property (readonly, copy, nonatomic) NSSet *taskHints;
@property (readonly, copy, nonatomic) NSSet *taskNames;
@property (readonly, copy, nonatomic) EARVoiceCommandActiveSet *voiceCommandActiveSet;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerModelOptions *modelOptions;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) BOOL isSingleUtteranceTask;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)featuresByAddingFlags:(unsigned long long)a0;
- (id)featuresByAddingTaskHints:(id)a0;
- (id)featuresWithCommandRecogitionForActiveSet:(id)a0;
- (id)initWithLocale:(id)a0 taskHints:(id)a1 voiceCommandActiveSet:(id)a2 modelOptions:(id)a3 flags:(unsigned long long)a4;
- (BOOL)taskHintsContainsHint:(long long)a0;

@end
