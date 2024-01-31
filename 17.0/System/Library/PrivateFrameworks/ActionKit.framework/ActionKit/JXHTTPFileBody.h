@class NSString;

@interface JXHTTPFileBody : NSObject <JXHTTPRequestBody>

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *httpContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withFilePath:(id)a0;
+ (id)withFilePath:(id)a0 contentType:(id)a1;

@end
