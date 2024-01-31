@class WDParagraph, WXReadState, NSMutableDictionary;

@interface WXOAVReadState : OAVReadState {
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}

- (void).cxx_destruct;
- (id)currentParagraph;
- (id)initWithWXReadState:(id)a0;
- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)a0;
- (id)wxReadState;

@end
