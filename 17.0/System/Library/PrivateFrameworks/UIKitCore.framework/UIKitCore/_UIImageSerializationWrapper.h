@class UIImage;

@interface _UIImageSerializationWrapper : NSObject <NSSecureCoding> {
    UIImage *_image;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
