@class NSURL, UTType;

@interface WFContextualActionFile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) UTType *type;

- (void)dispose;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 type:(id)a1;

@end
