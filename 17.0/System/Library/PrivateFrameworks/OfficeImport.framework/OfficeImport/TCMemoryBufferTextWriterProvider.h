@class NSMutableData;

@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, retain, nonatomic) NSMutableData *memoryBuffer;

- (BOOL)setUp;
- (void).cxx_destruct;
- (id)initWithMemoryBuffer:(id)a0;

@end
