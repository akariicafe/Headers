@class NSMutableArray;

@interface OADPath : NSObject {
    struct CGSize { double width; double height; } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (struct CGSize { double x0; double x1; })size;
- (id)description;
- (int)fillMode;
- (void)setFillMode:(int)a0;
- (void)addElement:(id)a0;
- (void).cxx_destruct;
- (id)elementAtIndex:(unsigned long long)a0;
- (unsigned long long)elementCount;
- (BOOL)stroked;
- (void)setStroked:(BOOL)a0;

@end
