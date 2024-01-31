@class NSString, UIResponder;
@protocol UITextInput;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
    UIResponder<UITextInput> *_textInput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTextInput:(id)a0;
- (BOOL)isPosition:(id)a0 withinTextUnit:(long long)a1 inDirection:(long long)a2;
- (BOOL)isPosition:(id)a0 atBoundary:(long long)a1 inDirection:(long long)a2;
- (id)positionFromPosition:(id)a0 toBoundary:(long long)a1 inDirection:(long long)a2;
- (id)_positionFromPosition:(id)a0 offset:(unsigned long long)a1 affinity:(long long)a2;
- (long long)_indexForTextPosition:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDownstreamForDirection:(long long)a0 atPosition:(id)a1;
- (id)rangeEnclosingPosition:(id)a0 withGranularity:(long long)a1 inDirection:(long long)a2;
- (id)_closestTokenSubrangeForPosition:(id)a0 granularity:(long long)a1 downstream:(BOOL)a2;
- (long long)_distanceForTokenizerWithGranularity:(long long)a0;

@end
