@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {
    struct PptTextHeaderAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; int x6; } *mTextHeader;
    NSMutableString *mText;
    void *mStyleText;
    void *mSpecialInfo;
    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;
    void *mTextRuler;
}

- (id)init;
- (void).cxx_destruct;
- (id)text;
- (id)bookmarks;
- (unsigned int)textIndex;
- (void)readString:(id)a0;
- (int)textType;
- (id)hyperlinks;
- (void)writeTextBlock:(id)a0;
- (struct PptCharRun { int x0; struct PptCharProperty { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 4; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 4; unsigned char x12 : 1; unsigned short x13; unsigned short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct PptColor { struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; int x1; } x18; short x19; } x1; } *)characterRunAtIndex:(int)a0;
- (int)characterRunCount;
- (id)metaCharacterFields;
- (void *)paragraphRunAtIndex:(int)a0;
- (int)paragraphRunCount;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)a0;
- (void)readSpecialInfo:(id)a0;
- (void)readStyles:(id)a0;
- (void)readTextBlock:(id)a0;
- (void *)specialInfoRunAtIndex:(int)a0;
- (int)specialInfoRunCount;
- (void *)textRuler;

@end
