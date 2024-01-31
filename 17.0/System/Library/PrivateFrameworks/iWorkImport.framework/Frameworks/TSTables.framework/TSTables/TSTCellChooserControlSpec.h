@class NSArray, TSTPopUpMenuModel;

@interface TSTCellChooserControlSpec : TSTCellSpec {
    NSArray *_displayChoices;
}

@property (retain, nonatomic) TSTPopUpMenuModel *popupModel;
@property (readonly, nonatomic) NSArray *displayChoicesForInspector;
@property (readonly, nonatomic) BOOL startWithFirstItem;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)popupCellSpec:(id)a0 startWithFirstItem:(BOOL)a1;
+ (id)cellSpecFromTSKFormat:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned int)interactionType;
- (BOOL)isEqual:(id)a0;
- (id)valueForIndex:(unsigned long long)a0;
- (unsigned long long)indexForValue:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)asChooserControlSpec;
- (id)displayStringAtIndex:(unsigned long long)a0;
- (id)initWithPopupModel:(id)a0 startWithFirstItem:(BOOL)a1;
- (id)tskMultipleChoiceListFormat;
- (BOOL)validateFormatAndValue:(id)a0;

@end
