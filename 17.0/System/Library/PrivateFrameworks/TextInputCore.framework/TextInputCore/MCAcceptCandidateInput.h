@class NSString, NSArray;

@interface MCAcceptCandidateInput : MCKeyboardInput

@property (readonly, copy, nonatomic) NSString *candidateText;
@property (readonly, copy, nonatomic) NSString *convertedInput;
@property (copy) NSArray *remainingMecabraInputs;
@property (copy) NSString *remainingInputString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canComposeNew:(id)a0;
- (id)initWithCandidateText:(id)a0 convertedInput:(id)a1;
- (id)shortDescriptionWithLeadingString:(id)a0;

@end
