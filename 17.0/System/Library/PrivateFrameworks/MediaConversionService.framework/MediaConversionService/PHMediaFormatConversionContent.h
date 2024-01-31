@class NSString, NSURL;

@interface PHMediaFormatConversionContent : NSObject {
    unsigned long long _length;
    NSString *_fileSignature;
}

@property (readonly) NSString *fileSignature;
@property long long mediaType;
@property (retain) NSURL *fileURL;
@property (readonly) unsigned long long length;
@property (readonly) NSString *fileType;
@property (readonly) BOOL isVideo;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isImage;
- (id)typeFromFileExtensionWithError:(id *)a0;
- (BOOL)isAssetBundle;

@end
