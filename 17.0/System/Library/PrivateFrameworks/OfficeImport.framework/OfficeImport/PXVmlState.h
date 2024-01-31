@class ESDObject, PBPresentationReaderState;

@interface PXVmlState : OAVReadState {
    ESDObject *mLegacyTextGlobals;
    PBPresentationReaderState *mLegacyPresentationState;
}

- (void).cxx_destruct;
- (id)legacyPresentationState;
- (id)legacyTextGlobals;
- (void)setLegacyPresentationState:(id)a0;
- (void)setLegacyTextGlobals:(id)a0;

@end
