@class VKCTextRecognitionResult;

@interface VKTextInputStringTokenizer : UITextInputStringTokenizer

@property (retain, nonatomic) VKCTextRecognitionResult *recognitionResult;

- (BOOL)isPosition:(id)a0 withinTextUnit:(long long)a1 inDirection:(long long)a2;
- (BOOL)isPosition:(id)a0 atBoundary:(long long)a1 inDirection:(long long)a2;
- (id)positionFromPosition:(id)a0 toBoundary:(long long)a1 inDirection:(long long)a2;
- (void).cxx_destruct;
- (id)rangeEnclosingPosition:(id)a0 withGranularity:(long long)a1 inDirection:(long long)a2;
- (id)initWithTextInput:(id)a0 recognitionResult:(id)a1;

@end
