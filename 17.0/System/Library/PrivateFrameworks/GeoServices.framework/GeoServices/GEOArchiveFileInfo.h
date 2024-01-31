@class NSString;

@interface GEOArchiveFileInfo : NSObject

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long length;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;

@end
