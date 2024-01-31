@class NSArray, NSMutableArray, NSNumber;

@interface _EARRecognitionMetrics : NSObject <NSCopying> {
    struct weak_ptr<quasar::SpeechRecognizer> { struct SpeechRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _recognizer;
}

@property (copy, nonatomic) NSMutableArray *allItnRunIntervals;
@property (readonly, copy, nonatomic) NSArray *pauseDurations;
@property (readonly, nonatomic) NSNumber *itnDurationInNs;
@property (readonly, nonatomic) BOOL isEmojiPersonalizationUsed;
@property (readonly, nonatomic) BOOL isEmojiDisambiguationUsed;
@property (readonly, nonatomic) BOOL isEmojiExpectedButNotRecognized;
@property (readonly, copy, nonatomic) NSArray *recognizedEmojis;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addEmojiRecognitionMetrics:(id)a0 recognizedEmojis:(id)a1;
- (void)addItnRunIntervals:(id)a0;
- (void)addPauseDurationMetric;
- (id)initWithRecognizer:(struct shared_ptr<quasar::SpeechRecognizer> { struct SpeechRecognizer *x0; struct __shared_weak_count *x1; })a0;

@end
