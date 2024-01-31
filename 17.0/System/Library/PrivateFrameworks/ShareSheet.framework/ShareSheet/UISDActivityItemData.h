@class NSArray, NSMutableDictionary, NSDictionary;

@interface UISDActivityItemData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *attachmentNamesByItem;
@property (readonly, nonatomic) NSMutableDictionary *subjectsByItem;
@property (readonly, nonatomic) NSMutableDictionary *previewImagesByItem;
@property (readonly, nonatomic) NSMutableDictionary *previewImageDataByItem;
@property (readonly, nonatomic) NSMutableDictionary *dataTypesByItem;
@property (retain, nonatomic) NSArray *securityContexts;
@property (retain, nonatomic) NSDictionary *openURLAnnotationsByURL;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)subjectForItem:(id)a0;
- (void)addAttachmentName:(id)a0 forItem:(id)a1;
- (void)addDataType:(id)a0 forItem:(id)a1;
- (void)addPreviewImage:(id)a0 forItem:(id)a1;
- (void)addPreviewImageData:(id)a0 forItem:(id)a1;
- (void)addSubject:(id)a0 forItem:(id)a1;
- (id)attachmentNameForItem:(id)a0;
- (BOOL)canAccessFileURL:(id)a0;
- (id)dataTypeForItem:(id)a0;
- (id)previewImageDataForItem:(id)a0;
- (id)previewImageForItem:(id)a0;

@end
