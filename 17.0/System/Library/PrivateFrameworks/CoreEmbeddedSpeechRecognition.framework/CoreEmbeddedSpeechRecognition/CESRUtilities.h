@interface CESRUtilities : NSObject

+ (BOOL)isTaskDictationSpecific:(id)a0;
+ (id)speechProfileRootDirectories;
+ (id)alignedPartialResultIndicesForTokens:(id)a0 firstSeenPartialResultTokens:(id)a1;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResult:(id)a0;
+ (id)recognizerSourceForTask:(id)a0;
+ (double)audioDurationInMs:(id)a0 samplingRate:(unsigned long long)a1;
+ (id)voiceCommandsParamKeyBuilder:(unsigned long long)a0;
+ (id)earTokensToString:(id)a0;
+ (void)generateABCSnapshotForType:(id)a0 subType:(id)a1 context:(id)a2;
+ (unsigned long long)machAbsoluteTimeToMachContinuousTime:(unsigned long long)a0;
+ (id)languageStringForLocaleString:(id)a0;
+ (float)hostTimeToSeconds:(unsigned long long)a0;
+ (id)afVoiceCommandGrammarParseResultForEARTokenString:(id)a0 withEARVoiceCommandInterpretations:(id)a1;
+ (id)_firstSeenPartialResultIndicesForTokens:(id)a0 firstSeenPartialResultTokens:(id)a1;
+ (id)afSpeechPackageForEARPackage:(id)a0 processedAudioDuration:(double)a1 speechProfileUsed:(BOOL)a2 recognizerModelInfo:(id)a3 isVoiceCommandCandidatePackage:(BOOL)a4;
+ (id)speechProfileDateLastModifiedForLanguage:(id)a0;
+ (BOOL)aFEnableFeatureAndCheckPreferenceValueWithKey:(struct __CFString { } *)a0;
+ (void)logToPowerLogForEventCategory:(id)a0 eventDictionary:(id)a1;
+ (unsigned long long)audioLengthInBytes:(double)a0 samplingRate:(unsigned long long)a1;
+ (id)earTokensForAFTokens:(id)a0 appendedAutoPunctuation:(BOOL)a1;
+ (unsigned long long)secondsToHostTime:(float)a0;
+ (id)getNormString:(id)a0;
+ (BOOL)isFilePathValid:(id)a0;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResultPackage:(id)a0;
+ (id)afTokensForEARTokens:(id)a0 removeSpaceBefore:(BOOL)a1;
+ (id)mapContextOptionToString:(unsigned long long)a0;
+ (BOOL)cooldownDisabledForDevice;
+ (double)getHostClockFrequency;
+ (id)_alignTokenToFirstSeenPartialResult:(id)a0 tokenIndex:(unsigned long long)a1 firstSeenPartialResultTokens:(id)a2 firstSeenPartialResultIndex:(unsigned long long)a3;
+ (id)afRecognitionForEARSausage:(id)a0 processedAudioDuration:(double)a1;
+ (long long)calculateDiffInDaysFromTimestamp:(id)a0;
+ (id)localeStringForLanguageString:(id)a0;
+ (void)loadSpeechProfiles:(id)a0 language:(id)a1;
+ (BOOL)hasRecognizedAnythingInAFSpeechPackage:(id)a0;
+ (id)speechProfilePathsWithLanguage:(id)a0;
+ (id)audioData:(id)a0 withBytesFromEnd:(unsigned long long)a1;

@end
