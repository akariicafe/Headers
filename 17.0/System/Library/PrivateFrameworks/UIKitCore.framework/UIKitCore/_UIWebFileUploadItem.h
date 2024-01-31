@class NSString;

@interface _UIWebFileUploadItem : NSObject

@property (retain, nonatomic) NSString *filePath;

- (void)dealloc;
- (id)initWithFilePath:(id)a0;
- (id)displayImage;
- (BOOL)isVideo;

@end
