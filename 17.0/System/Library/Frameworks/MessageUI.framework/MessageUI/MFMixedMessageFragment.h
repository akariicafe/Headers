@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}

- (id)mimeType;
- (id)baseURL;
- (id)description;
- (void).cxx_destruct;
- (id)markupString;
- (id)encodingName;
- (id)initWithMarkupData:(id)a0 textEncodingName:(id)a1 baseURL:(id)a2;
- (id)initWithMarkupString:(id)a0 baseURL:(id)a1;
- (id)markupData;

@end
