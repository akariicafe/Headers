@class NSArray;

@interface QSSMutableRecognitionPhraseTokensAlternatives : QSSRecognitionPhraseTokensAlternatives

@property (copy, nonatomic) NSArray *tok_phrases;
@property (nonatomic) BOOL has_unsuggested_alternatives;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
