@class EMWorkbookMapper;

@interface EMTop : QLTop <OIProgressiveReaderDelegate>

@property (readonly) EMWorkbookMapper *mapper;

+ (BOOL)supportsProgressiveMapping;

- (Class)stateClass;
- (void)initializeClasses;
- (Class)mapperClassForIndexing:(BOOL)a0;
- (void)readFile:(id)a0 orData:(id)a1 dataFileName:(id)a2 format:(unsigned long long)a3 archiver:(id)a4 forIndexing:(BOOL)a5;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (void)readerDidStartDocument:(id)a0 withElementCount:(long long)a1;

@end
