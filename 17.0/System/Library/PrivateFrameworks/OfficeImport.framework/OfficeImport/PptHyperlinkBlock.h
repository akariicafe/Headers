@class ESDContainer, ESDObject;

@interface PptHyperlinkBlock : NSObject {
    ESDContainer *mInteractiveInfoContainerHolder;
    ESDObject *mTxInteractiveInfoAtomHolder;
}

- (void).cxx_destruct;
- (void)setTxInteractiveInfoAtomHolder:(id)a0;
- (id)interactiveInfoContainerHolder;
- (void)setInteractiveInfoContainerHolder:(id)a0;
- (struct PptTxInteracInfoAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; int x6; int x7; } *)txtInteractiveInfoAtom;

@end
