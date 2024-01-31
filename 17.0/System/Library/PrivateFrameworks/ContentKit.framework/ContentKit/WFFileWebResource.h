@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource

@property (readonly, nonatomic) WFFileRepresentation *file;

+ (BOOL)supportsSecureCoding;

- (id)initWithFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)MIMEType;
- (id)loadInWKWebView:(id)a0;

@end
