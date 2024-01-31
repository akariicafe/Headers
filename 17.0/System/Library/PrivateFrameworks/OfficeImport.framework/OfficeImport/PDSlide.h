@class PDSlideLayout, PDNotesSlide, NSMutableArray, OITSUNoCopyDictionary;

@interface PDSlide : PDSlideChild {
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}

@property (retain) OITSUNoCopyDictionary *commentParents;

- (id)background;
- (id)transition;
- (id)description;
- (void).cxx_destruct;
- (id)defaultTheme;
- (unsigned long long)commentCount;
- (void)addComment:(id)a0;
- (void)doneWithContent;
- (id)commentAtIndex:(unsigned long long)a0;
- (id)parentSlideBase;
- (void)setSlideLayout:(id)a0;
- (id)commentForAuthorId:(unsigned long long)a0 authorIdx:(unsigned long long)a1;
- (id)inheritedTextStyleForPlaceholderType:(int)a0;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)notesSlide;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (void)removeUnnecessaryOverrides;
- (void)setInheritedTextStyle:(id)a0 placeholderType:(int)a1 defaultTextListStyle:(id)a2;
- (void)setNotesSlide:(id)a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideLayout;

@end
