@class NSData, NSURL, NSString;

@interface NSSubstituteWebResource : NSObject {
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

- (void)dealloc;
- (id)URL;
- (id)data;
- (id)MIMEType;
- (id)textEncodingName;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;
- (Class)_webResourceClass;
- (id)frameName;
- (id)webResource;

@end
