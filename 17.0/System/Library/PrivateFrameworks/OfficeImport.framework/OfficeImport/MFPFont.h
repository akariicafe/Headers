@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (void)setSize:(float)a0;
- (void)setUnit:(int)a0;
- (void)setName:(id)a0;
- (void)setFlags:(unsigned int)a0;
- (float)size;
- (unsigned int)flags;
- (int)unit;
- (void).cxx_destruct;
- (id)name;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
