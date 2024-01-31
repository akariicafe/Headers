@class NSString, NSData, UTType;

@interface MSAttachmentItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) UTType *uttype;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *additionalMarkup;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentID:(id)a0 uttype:(id)a1 data:(id)a2 additionalMarkup:(id)a3;

@end
