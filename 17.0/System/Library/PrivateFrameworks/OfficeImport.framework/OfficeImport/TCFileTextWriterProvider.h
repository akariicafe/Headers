@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *filePath;

- (BOOL)setUp;
- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;

@end
