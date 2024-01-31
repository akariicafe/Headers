@class WDDocument, NSMutableArray, WDTableCell;

@interface WDText : NSObject {
    NSMutableArray *mBlocks;
    int mTextType;
}

@property (readonly, weak) WDDocument *document;
@property (readonly, weak) WDTableCell *tableCell;

- (id)blocks;
- (id)content;
- (id)description;
- (void)addBlock:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)paragraphs;
- (int)textType;
- (void)removeLastBlock;
- (id)addParagraph;
- (id)addParagraphAtIndex:(int)a0;
- (id)addTable;
- (id)addTableAtIndex:(int)a0;
- (id)blockAt:(unsigned long long)a0;
- (unsigned long long)blockCount;
- (id)blockIterator;
- (id)firstParagraph;
- (unsigned long long)indexOfBlock:(id)a0;
- (id)initWithDocument:(id)a0 textType:(int)a1;
- (id)initWithDocument:(id)a0 textType:(int)a1 tableCell:(id)a2;
- (id)lastBlock;
- (id)newBlockIterator;
- (id)newRunIterator;
- (void)removeLastCharacter:(unsigned short)a0;
- (id)runIterator;
- (int)tableNestingLevel;

@end
