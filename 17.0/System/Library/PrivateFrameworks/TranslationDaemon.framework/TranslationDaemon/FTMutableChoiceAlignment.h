@class NSArray;

@interface FTMutableChoiceAlignment : FTChoiceAlignment

@property (copy, nonatomic) NSArray *post_itn_choice_indices;
@property (copy, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignments;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
