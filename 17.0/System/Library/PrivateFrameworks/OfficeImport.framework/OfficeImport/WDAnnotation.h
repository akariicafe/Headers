@class WDAnnotationData, WDCharacterRun;

@interface WDAnnotation : WDRun {
    int mType;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

@property BOOL isResolved;
@property WDAnnotation *parent;

- (id)reference;
- (id)owner;
- (void)setOwner:(id)a0;
- (void)setDate:(id)a0;
- (id)data;
- (id)description;
- (id)date;
- (void).cxx_destruct;
- (id)text;
- (int)annotationType;
- (unsigned long long)lastParagraphId;
- (int)runType;
- (id)initWithParagraph:(id)a0 type:(int)a1;
- (id)otherEndOfRangedAnnotation;
- (id)paragraphIds;
- (BOOL)referencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(id)a0;
- (void)setReferencePropertiesFixed;
- (void)useDataFromOtherEnd;

@end
