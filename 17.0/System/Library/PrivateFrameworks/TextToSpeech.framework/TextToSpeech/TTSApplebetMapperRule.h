@class NSArray;

@interface TTSApplebetMapperRule : NSObject

@property (retain, nonatomic) NSArray *left;
@property (retain, nonatomic) NSArray *match;
@property (retain, nonatomic) NSArray *right;
@property (copy, nonatomic) id /* block */ matchRule;
@property (retain, nonatomic) NSArray *substitution;

+ (id)ruleWithHeterogeniousArray:(id)a0;

- (void).cxx_destruct;

@end
