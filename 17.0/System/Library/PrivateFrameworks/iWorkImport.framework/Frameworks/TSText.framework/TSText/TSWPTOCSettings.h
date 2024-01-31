@class NSString, TSURetainedPointerKeyDictionary, NSSet;

@interface TSWPTOCSettings : TSPObject <TSPCopying, TSSPreset, TSSStyleClient>

@property (retain, nonatomic) TSURetainedPointerKeyDictionary *map;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long scope;
@property (readonly, nonatomic) NSSet *indexedStyles;
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *referencedStyles;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addIndexedStyle:(id)a0 withEntryStyle:(id)a1;
- (void)addIndexedStyle:(id)a0 withEntryStyle:(id)a1 showInTOC:(BOOL)a2;
- (id)copyUsingDeepCopy;
- (id)entryStyleForParagraphStyle:(id)a0;
- (void)p_upgradeStyle:(id)a0 withStylesheet:(id)a1;
- (void)removeIndexedStyle:(id)a0;
- (BOOL)showInTOCForParagraphStyle:(id)a0;
- (void)upgradeWithStylesheet:(id)a0;

@end
