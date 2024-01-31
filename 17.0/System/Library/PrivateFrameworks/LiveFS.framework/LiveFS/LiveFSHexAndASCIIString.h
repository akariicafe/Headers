@class NSData;

@interface LiveFSHexAndASCIIString : NSString {
    NSData *data;
}

- (id)init;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
