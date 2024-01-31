@class NSArray, NSString;

@interface DocumentUnderstandingClient.DUIngestableFiletypes : NSObject

@property (class, nonatomic, readonly) NSArray *supportedUTTypes;
@property (class, nonatomic, readonly) NSArray *wrappedSupportedUTTypes;
@property (class, nonatomic, readonly) NSArray *supportedFileExtensions;
@property (class, nonatomic, readonly) NSString *icloudFileExtension;
@property (class, nonatomic, readonly) NSArray *officeFileExtensions;
@property (class, nonatomic, readonly) NSArray *iWorkFileExtensions;
@property (class, nonatomic, readonly) NSArray *pdfFileExtensions;
@property (class, nonatomic, readonly) NSArray *jsonFileExtensions;
@property (class, nonatomic, readonly) NSArray *txtFileExtensions;

+ (BOOL)isFileURLSupported:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
