@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser

@property (retain, nonatomic) NSFileHandle *fileHandle;

- (void).cxx_destruct;
- (id)initWithFileHandle:(id)a0;
- (BOOL)processData:(id)a0 forTask:(id)a1;

@end
