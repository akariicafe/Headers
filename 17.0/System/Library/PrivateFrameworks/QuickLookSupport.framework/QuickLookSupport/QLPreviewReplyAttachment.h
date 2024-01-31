@class NSData, UTType;

@interface QLPreviewReplyAttachment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) UTType *contentType;
@property (retain) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 contentType:(id)a1;

@end
