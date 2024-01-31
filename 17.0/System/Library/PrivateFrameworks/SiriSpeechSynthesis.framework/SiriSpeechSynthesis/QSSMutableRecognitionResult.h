@class QSSRecognitionSausage, NSArray;

@interface QSSMutableRecognitionResult : QSSRecognitionResult

@property (copy, nonatomic) QSSRecognitionSausage *pre_itn;
@property (copy, nonatomic) QSSRecognitionSausage *post_itn;
@property (copy, nonatomic) NSArray *pre_itn_nbest_choices;
@property (copy, nonatomic) NSArray *post_itn_nbest_choices;
@property (copy, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
@property (copy, nonatomic) NSArray *choice_alignments;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
