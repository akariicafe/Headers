@class NSURL, NSDate;

@interface SYLastModifiedDocumentAttributes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSDate *modifiedDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileURL:(id)a0 modifiedDate:(id)a1;

@end
