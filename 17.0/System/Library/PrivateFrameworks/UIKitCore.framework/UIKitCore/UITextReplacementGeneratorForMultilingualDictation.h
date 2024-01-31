@class NSArray;

@interface UITextReplacementGeneratorForMultilingualDictation : UITextReplacementGenerator

@property (readonly, nonatomic) NSArray *multilingualAlternatives;

- (void).cxx_destruct;
- (id)replacements;
- (id)initWithMultilingualAlternatives:(id)a0 stringToReplace:(id)a1 replacementRange:(id)a2;

@end
