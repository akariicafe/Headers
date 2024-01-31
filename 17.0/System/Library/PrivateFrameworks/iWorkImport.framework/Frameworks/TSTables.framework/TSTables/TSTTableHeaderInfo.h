@class TSWPParagraphStyle, TSTCellStyle;

@interface TSTTableHeaderInfo : NSObject {
    unsigned char _hidingState;
    unsigned int _numberOfCells;
    TSTCellStyle *_cellStyle;
    TSWPParagraphStyle *_textStyle;
    double _size;
}

- (id)description;
- (void).cxx_destruct;

@end
