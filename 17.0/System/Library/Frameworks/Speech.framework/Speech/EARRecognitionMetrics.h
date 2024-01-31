@class NSArray, NSNumber;

@interface EARRecognitionMetrics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *allItnRunIntervals;
@property (readonly, copy, nonatomic) NSArray *pauseDurations;
@property (readonly, nonatomic) NSNumber *itnDurationInNs;
@property (readonly, nonatomic) BOOL isEmojiPersonalizationUsed;
@property (readonly, nonatomic) BOOL isEmojiDisambiguationUsed;
@property (readonly, nonatomic) BOOL isEmojiExpectedButNotRecognized;
@property (readonly, copy, nonatomic) NSArray *recognizedEmojis;
@property (readonly, nonatomic) double cpuMillionInstructionsPerSecond;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecognitionMetrics:(id)a0 cpuInstructions:(double)a1;

@end
