@class NSURLRequest, NSAttributedString;

@interface PKPaymentContentItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURLRequest *imageRequest;
@property (nonatomic) struct CGImage { } *image;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *label;
@property (nonatomic, getter=isCentered) BOOL centered;

+ (id)itemWithProtobuf:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPaymentContentItem:(id)a0;

@end
