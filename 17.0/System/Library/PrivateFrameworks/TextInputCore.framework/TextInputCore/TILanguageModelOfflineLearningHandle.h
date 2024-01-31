@class NSDate, TILanguageModelAdaptationContext, TIInputMode;

@interface TILanguageModelOfflineLearningHandle : NSObject

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (copy, nonatomic) NSDate *lastAdaptationDate;
@property (copy, nonatomic) TILanguageModelAdaptationContext *currentAdaptationContext;
@property (nonatomic, getter=isValid) BOOL valid;

+ (id)handleForInputMode:(id)a0;
+ (id)handleForLanguageLikelihood;

- (void)load;
- (void).cxx_destruct;
- (id)initWithInputMode:(id)a0;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)a0;

@end
