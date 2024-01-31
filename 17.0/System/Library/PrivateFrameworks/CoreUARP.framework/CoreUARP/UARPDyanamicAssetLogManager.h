@class NSURL;

@interface UARPDyanamicAssetLogManager : NSObject

@property (readonly) NSURL *baseURL;

- (id)init;
- (id)initWithBaseURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)newLog:(id)a0 error:(id *)a1;

@end
