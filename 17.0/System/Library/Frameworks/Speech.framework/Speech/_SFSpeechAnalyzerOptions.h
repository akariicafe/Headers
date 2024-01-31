@class _SFSpeechAnalyzerOptionsLoggingInfo, _SFSpeechAnalyzerOptionsPowerContext;

@interface _SFSpeechAnalyzerOptions : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, copy, nonatomic) _SFSpeechAnalyzerOptionsLoggingInfo *loggingInfo;
@property (readonly, copy, nonatomic) _SFSpeechAnalyzerOptionsPowerContext *powerContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHighPriority:(BOOL)a0 loggingInfo:(id)a1 powerContext:(id)a2;

@end
