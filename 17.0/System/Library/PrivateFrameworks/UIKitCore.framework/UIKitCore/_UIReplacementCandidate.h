@class NSString, NSArray, UITextRange;

@interface _UIReplacementCandidate : NSObject

@property (retain, nonatomic) NSString *displayedText;
@property (retain, nonatomic) NSString *revertText;
@property (retain, nonatomic) NSArray *textChoices;
@property (retain, nonatomic) NSArray *underlines;
@property (retain, nonatomic) UITextRange *rangeInDocument;
@property (nonatomic) long long underlineStyle;
@property (nonatomic) long long preferredPromptStyle;
@property (nonatomic) long long preferredPromptButton;

+ (id)candidateForAutocorrection:(id)a0 range:(id)a1 underlineStyle:(long long)a2 promptStyle:(long long)a3 promptButton:(long long)a4;
+ (id)candidateForAutocorrectionCandidate:(id)a0 range:(id)a1;
+ (id)candidateForFinalText:(id)a0 revertText:(id)a1 range:(id)a2 underlineStyle:(long long)a3 promptStyle:(long long)a4 promptButton:(long long)a5;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;

@end
