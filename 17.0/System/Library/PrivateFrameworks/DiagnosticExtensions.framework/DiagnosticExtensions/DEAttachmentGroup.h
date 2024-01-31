@class NSURL, NSArray;

@interface DEAttachmentGroup : DEAttachmentItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *rootURL;
@property (retain, nonatomic) NSArray *attachmentItems;

+ (id)createWithName:(id)a0 rootURL:(id)a1 attachmentItems:(id)a2;
+ (id)createWithName:(id)a0 rootURL:(id)a1;

- (id)attachToDestinationDir:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
