@class NSURL;

@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling>

@property (readonly, copy) NSURL *assertionStorageFileURL;

- (void).cxx_destruct;
- (id)initWithAssertionStorageFileURL:(id)a0;
- (id)loadAssertionData;
- (void)saveAssertionData:(id)a0;

@end
