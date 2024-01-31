@interface TSAPdfTaggerTocParagraphLevelResolver : TSAPdfTaggerParagraphLevelResolver

- (int)tagType;
- (int)levelOfCurrentParagraph:(id *)a0;
- (BOOL)paragraphInfo:(id)a0 matchesParagraphInfo:(id)a1 level:(int)a2;

@end
