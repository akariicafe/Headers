@class NSString, NSData, NSURL, WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {
    WebResourcePrivate *_private;
}

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) NSString *textEncodingName;
@property (readonly, copy, nonatomic) NSString *frameName;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_response;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;
- (id)_stringValue;
- (id)_suggestedFilename;
- (struct NakedRef<WebCore::ArchiveResource> { struct ArchiveResource *x0; })_coreResource;
- (void)_ignoreWhenUnarchiving;
- (id)_initWithCoreResource:(void *)a0;
- (id)_initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4 response:(id)a5 copyData:(BOOL)a6;
- (id)_initWithData:(id)a0 URL:(id)a1 response:(id)a2;

@end
