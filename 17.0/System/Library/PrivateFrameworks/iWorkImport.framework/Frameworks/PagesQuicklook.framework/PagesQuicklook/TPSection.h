@class NSUUID, NSString, NSURL, NSArray, TPPageTemplate, TSDFill, TSWPStorage, TPSectionTemplatePage;

@interface TPSection : TSPObject <TSDReducibleImageContainer, TSDReplaceableMediaContainer, TSKDocumentObject, TSKModel, TSWPSection> {
    TPSectionTemplatePage *_sectionTemplatePages[3];
    TSWPStorage *_parentStorage;
    NSString *_name;
    NSUUID *_sectionHyperlinkUUID;
    BOOL _inheritPreviousHeaderFooter;
    unsigned int _sectionStartKind;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
}

@property (readonly, nonatomic) TPPageTemplate *pageTemplate;
@property (readonly, nonatomic) NSArray *pageInfosForPropagation;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *sectionHyperlinkUUID;
@property (readonly, nonatomic) NSString *localizedPrettyDisplayStringShort;
@property (readonly, nonatomic) NSString *localizedPrettyDisplayStringLong;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (nonatomic) BOOL inheritPreviousHeaderFooter;
@property (nonatomic) BOOL sectionTemplateFirstPageDifferent;
@property (nonatomic) BOOL sectionTemplateFirstPageHidesHeaderFooter;
@property (nonatomic) BOOL sectionTemplateEvenOddPagesDifferent;
@property (retain, nonatomic) TSDFill *backgroundFill;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) unsigned int sectionStartKind;
@property (nonatomic) unsigned int sectionPageNumberKind;
@property (nonatomic) unsigned int sectionPageNumberStart;
@property (readonly, nonatomic) NSArray *sectionTemplatePages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needsObjectUUID;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;
- (id)allDrawables;
- (id)childEnumerator;
- (id)copyWithContext:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)a0;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)objectUUIDPath;
- (id)sectionTemplatePageOwningModel:(id)a0;
- (BOOL)isHeaderFooterEmpty:(long long)a0;
- (id)sectionTemplatePageOwningInfo:(id)a0;
- (BOOL)pageMasterEvenOddPagesDifferent;
- (void)i_clearPropertiesToDefaults;
- (void)i_copyHeadersAndFootersFrom:(id)a0 dolcContext:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithContext:(id)a0 section:(id)a1;
- (BOOL)isHeaderFooterVisible:(long long)a0;
- (void)p_addAllDrawablesFromInfo:(id)a0 toMutableArray:(id)a1;
- (void)p_makeUserGuideStorage;
- (void)p_unarchiveAndUpgrade:(id)a0 archive:(const void *)a1;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(const void *)a0;
- (BOOL)pageMasterFirstPageDifferent;
- (BOOL)pageMasterFirstPageHidesHeaderFooter;
- (id)sectionTemplatePageForType:(long long)a0;
- (void)setSectionTemplatePageForFirstPage:(id)a0;

@end
