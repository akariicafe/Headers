@class NSString;

@interface TTSStreamingZipReader : NSObject

@property (retain, nonatomic) NSString *zipPath;
@property (retain, nonatomic) NSString *password;

- (void).cxx_destruct;
- (BOOL)enumerateFiles:(id /* block */)a0;
- (id)initWithPath:(id)a0 andPassword:(id)a1;

@end
