@class UIImage, IMPluginPayload;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IMPluginPayload *pluginPayload;
@property (retain, nonatomic) UIImage *composeImage;

+ (id)pluginDisplayContainerWithPluginPayload:(id)a0 composeImage:(id)a1;
+ (id)unarchiveFromData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)pasteboardItemProvider;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
