@class NSString, NSArray;

@interface NLClassifierModelDataInstance : NLDataInstance {
    NSString *_string;
    NSString *_label;
    NSArray *_tokens;
}

+ (id)readInstancesFromString:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;

- (id)label;
- (id)labels;
- (id)string;
- (id)tokens;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 label:(id)a1 tokenizer:(struct __CFStringTokenizer { } *)a2;
- (id)formattedLineWithLabelMap:(id)a0 vocabularyMap:(id)a1;
- (id)initWithLine:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;
- (id)initWithString:(id)a0 label:(id)a1;
- (struct __CFDictionary { } *)instanceDictionary;
- (id)locatorsWithIndex:(unsigned long long)a0 parameters:(struct _NLConstraintParameters { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a1 tagger:(id)a2 tokenizer:(struct __CFStringTokenizer { } *)a3;
- (id)subInstanceWithLocator:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;

@end
