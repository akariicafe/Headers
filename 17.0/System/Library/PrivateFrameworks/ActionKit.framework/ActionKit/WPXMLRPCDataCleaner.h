@class NSData;

@interface WPXMLRPCDataCleaner : NSObject {
    NSData *xmlData;
}

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)appendClosingTags:(id)a0 toResponseString:(id)a1;
- (id)cleanCharactersBeforePreamble:(id)a0;
- (id)cleanClosingTagIfNeeded:(id)a0 lengthOfCharactersPrecedingPreamble:(long long)a1;
- (id)cleanData;
- (id)cleanInvalidUTF8:(id)a0;
- (id)cleanInvalidXMLCharacters:(id)a0;
- (id)cleanWithTidyIfPresent:(id)a0;
- (id)cloingTagsForString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfLastValidClosingTagInString:(id)a0;
- (id)repairTruncatedClosingTags:(id)a0 inResponseString:(id)a1;

@end
