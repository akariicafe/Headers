@class NSArray;

@interface EARSpeechRecognitionResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSArray *preITNTokens;
@property (readonly, nonatomic) double confidence;
@property (readonly, copy, nonatomic) NSArray *voiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSArray *preITNVoiceCommandInterpretations;

- (id)initWithResult:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
