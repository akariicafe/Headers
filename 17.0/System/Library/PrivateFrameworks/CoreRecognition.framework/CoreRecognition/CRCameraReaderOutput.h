@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject

@property (retain) CRCameraReaderOutputInternal *objectInternal;
@property (readonly) NSString *type;
@property (readonly) NSString *stringValue;
@property (readonly) NSString *formattedStringValue;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImageReaderOutput:(id)a0;

@end
