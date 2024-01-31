@class CLKImageProvider, CLKTextProvider;

@interface CDLabelProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLKTextProvider *textProvider;
@property (readonly, nonatomic) CLKImageProvider *imageProvider;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTextProvider:(id)a0 imageProvider:(id)a1;

@end
