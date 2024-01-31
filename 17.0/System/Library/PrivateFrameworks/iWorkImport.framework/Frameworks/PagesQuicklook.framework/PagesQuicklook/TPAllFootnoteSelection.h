@interface TPAllFootnoteSelection : TSKSelection

+ (Class)archivedSelectionClass;

- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)aggregate:(id)a0 fullPath:(id)a1 selectionModelTranslatorProvider:(id)a2;
- (BOOL)canBeGroupedForActivityStreamWithFullPath:(id)a0 index:(unsigned long long)a1;

@end
