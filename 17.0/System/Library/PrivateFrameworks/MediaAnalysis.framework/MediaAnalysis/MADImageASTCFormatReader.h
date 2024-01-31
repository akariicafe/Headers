@class NSData, NSDictionary;

@interface MADImageASTCFormatReader : NSObject {
    NSData *_dataStream;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _numImagesRemaining;
    NSDictionary *_plist;
}

+ (BOOL)isValidASTCExtension:(id)a0;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (int)readDataToBuffer:(void *)a0 Position:(unsigned long long)a1 Length:(unsigned long long)a2;
- (struct CGImageSource { } *)readNextImageSource;
- (struct CGImageSource { } *)readOneImageSource;
- (int)readPList;

@end
