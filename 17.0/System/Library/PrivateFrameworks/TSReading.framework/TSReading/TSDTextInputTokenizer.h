@class TSDTextInputResponder;
@protocol TSDTextInput;

@interface TSDTextInputTokenizer : UITextInputStringTokenizer {
    TSDTextInputResponder *_textInputResponder;
}

@property (readonly, nonatomic) id<TSDTextInput> editor;

- (id)initWithTextInput:(id)a0;
- (BOOL)isPosition:(id)a0 withinTextUnit:(long long)a1 inDirection:(long long)a2;
- (BOOL)isPosition:(id)a0 atBoundary:(long long)a1 inDirection:(long long)a2;
- (id)positionFromPosition:(id)a0 toBoundary:(long long)a1 inDirection:(long long)a2;
- (id)rangeEnclosingPosition:(id)a0 withGranularity:(long long)a1 inDirection:(long long)a2;
- (id)p_moveToEndOfWordFromPosition:(id)a0;
- (id)p_moveToStartOfWordFromPosition:(id)a0;
- (id)p_positionFromPosition:(id)a0 toBoundary:(long long)a1 inDirection:(long long)a2;

@end
