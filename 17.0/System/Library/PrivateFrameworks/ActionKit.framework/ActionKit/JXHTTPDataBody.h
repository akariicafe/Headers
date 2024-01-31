@class NSData, NSString;

@interface JXHTTPDataBody : NSObject <JXHTTPRequestBody>

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *httpContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withData:(id)a0;
+ (id)withData:(id)a0 contentType:(id)a1;

@end
