@class NSData, NSString;

@interface MFAttachmentRaw : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *contentID;

+ (id)attachmentData:(id)a0 fileName:(id)a1 mimeType:(id)a2;
+ (id)attachmentData:(id)a0 fileName:(id)a1 mimeType:(id)a2 contentID:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
