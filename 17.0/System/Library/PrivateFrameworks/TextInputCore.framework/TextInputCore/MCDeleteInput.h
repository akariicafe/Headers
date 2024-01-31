@class NSString;

@interface MCDeleteInput : MCKeyboardInput

@property (readonly, nonatomic) NSString *deletedText;
@property (readonly, nonatomic) BOOL deleteBySyllable;
@property (readonly, nonatomic) BOOL shouldDeleteAcceptCandidateInput;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canComposeNew:(id)a0;
- (id)initWithDeletedText:(id)a0 deleteBySyllable:(BOOL)a1 shouldDeleteAcceptCandidateInput:(BOOL)a2;

@end
