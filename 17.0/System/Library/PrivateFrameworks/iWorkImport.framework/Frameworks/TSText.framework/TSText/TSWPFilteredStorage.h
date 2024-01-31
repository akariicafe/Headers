@class NSString, TSWPStorage, TSWPDeletionRangeMap;

@interface TSWPFilteredStorage : NSObject <TSWPTextSource> {
    TSWPStorage *_storage;
    TSWPDeletionRangeMap *_rangeMap;
    unsigned long long _length;
    unsigned long long _storageChangeCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filteredStorageRemovingDeletionsFromStorage:(id)a0 subRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (unsigned long long)changeCount;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)string;
- (void).cxx_destruct;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)enumerateSmartFieldsWithAttributeKind:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (id)paragraphStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)previousCharacterIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scanBackwardForWordAtCharIndex:(unsigned long long)a0;
- (id)attachmentAtCharIndex:(unsigned long long)a0;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)a0;
- (void)attributesAtCharIndex:(unsigned long long)a0 attributesOfInterest:(BOOL[23])a1 attributesTable:(id[23])a2 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)a0;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)a0;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateWithAttributeKind:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)a0;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned long long)a0;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)a0;
- (BOOL)hasSmartFieldsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)hyphenationLocationBeforeIndex:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 locale:(id)a2 hyphenChar:(unsigned int *)a3;
- (id)initWithStorage:(id)a0 subRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithStorage:(id)a0 subRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 removeRanges:(id)a2;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)a0;
- (unsigned long long)nextCharacterIndex:(unsigned long long)a0;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)a0 forAttributeKind:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSelectionAtCharIndex:(unsigned long long)a0 caretIndex:(unsigned long long)a1;
- (id)smartFieldAtCharIndex:(unsigned long long)a0 attributeKind:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)smartFieldsWithAttributeKind:(unsigned long long)a0 intersectingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)storageLength;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })whiteSpaceRangeAtCharIndex:(unsigned long long)a0 includingBreaks:(BOOL)a1;
- (id)dropCapStyleAtCharIndex:(unsigned long long)a0;
- (BOOL)adjustRangesByDelta:(long long)a0 startingAt:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeRemappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)characterStyleForDropCapAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfDropCapAtCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfDropCapAtCharIndex:(unsigned long long)a0 actualCharacterCount:(out unsigned long long *)a1;
- (void)updateStorageChangeCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1 includeHyphenation:(BOOL)a2;

@end
