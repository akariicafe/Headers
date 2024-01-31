@class PDSlideBase, PDPresentation, ESDObject, PBSlideState, ESDRoot, PBOfficeArtReaderState, NSMutableDictionary, NSMutableArray, OITSUNoCopyDictionary, ESDContainer, PBOutlineBulletDictionary;
@protocol TCCancelDelegate;

@interface PBPresentationReaderState : NSObject {
    void *mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    void *mCurrentSlideTextBlockRecordIndexRangeVector;
    unsigned int mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;
    struct __CFDictionary { } *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    BOOL mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    void *mSrcDocMasterStyleInfoVector;
    void *mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property (retain) ESDContainer *sourceSlideListHolder;
@property (retain, nonatomic) id<TCCancelDelegate> cancelDelegate;
@property BOOL hasSlideNumberPlaceholder;

- (void *)reader;
- (BOOL)isCancelled;
- (void)dealloc;
- (void).cxx_destruct;
- (id)documentRoot;
- (void)setDocumentRoot:(id)a0;
- (BOOL)hasCharacterPropertyBulletIndex;
- (id)initWithReader:(void *)a0 tgtPresentation:(id)a1;
- (void)setBulletIndex:(unsigned int)a0;
- (id)tgtPresentation;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom *x0; struct PptTextMasterStyle9Atom *x1; } *)docSourceMasterStyleInfoOfType:(int)a0;
- (unsigned long long)fontEntityCount;
- (void)resetSlideState;
- (id)slideIndexesRef;
- (void)addFontEntity:(id)a0 charSet:(int)a1 type:(int)a2 family:(int)a3;
- (void)addSlideIndex:(unsigned long long)a0;
- (unsigned int)bulletIndex;
- (id)currentBulletStyle;
- (id)currentMacCharStyle;
- (void *)currentSlideTextBlockRecordIndexRangeVector;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom *x0; struct PptTextMasterStyle9Atom *x1; } *)currentSourceMasterStyleInfoOfType:(int)a0;
- (id)fontEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)getSlideIndexAt:(unsigned long long)a0;
- (BOOL)hasCurrentSourceMasterStyleInfoVector;
- (id)hyperlinkInfoWithId:(unsigned int)a0 createIfAbsent:(BOOL)a1;
- (id)masterStyles:(id)a0;
- (unsigned long long)numberOfSlideIndexes;
- (id)officeArtState;
- (void)setCurrentBulletStyle:(id)a0 macCharStyle:(id)a1;
- (void)setCurrentSourceMasterStyleInfoVector:(void *)a0;
- (void)setCurrentTextType:(int)a0 placeholderIndex:(unsigned int)a1;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)a0;
- (void)setMasterStyles:(id)a0 slideMaster:(id)a1;
- (void)setPlaceholderBulletStyles:(id)a0;
- (void)setPlaceholderMacCharStyles:(id)a0;
- (void)setSourceSlideId:(unsigned int)a0;
- (void)setSourceTextBoxContainerHolder:(id)a0 forTargetShape:(id)a1;
- (void)setTgtSlide:(id)a0;
- (id)slideState;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)a0;
- (id)tgtSlide;

@end
