@class NSString, TIKeyboardCandidate;

@interface _UIInlineTextCompletion : NSObject

@property (readonly, copy, nonatomic) TIKeyboardCandidate *completion;
@property (readonly, copy, nonatomic) TIKeyboardCandidate *source;
@property (readonly, nonatomic) NSString *candidate;
@property (readonly, nonatomic) NSString *input;

+ (id)inlineTextCompletion:(id)a0 source:(id)a1;

- (void).cxx_destruct;
- (id)initWithCompletion:(id)a0 source:(id)a1;

@end
