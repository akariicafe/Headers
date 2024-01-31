@interface TSDInstantAlphaBinaryBitmap : NSObject {
    long long mWidth;
    long long mHeight;
    long long mRowBytes;
    char *mData;
}

- (void)dealloc;
- (id)initWithWidth:(long long)a0 height:(long long)a1;
- (void)unionWithBitmap:(id)a0;

@end
