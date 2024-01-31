@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (id)document;
- (id)init;
- (id)initWithText:(id)a0;
- (id)description;
- (id)text;
- (BOOL)isEmpty;
- (void)clearProperties;
- (int)textType;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;

@end
