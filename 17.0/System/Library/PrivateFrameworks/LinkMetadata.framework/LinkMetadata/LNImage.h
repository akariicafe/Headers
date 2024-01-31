@class INImage;

@interface LNImage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INImage *inImage;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) LNImage *proxiedImageCopy;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemImageNamed:(id)a0;
- (id)initWithData:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithData:(id)a0 renderingMode:(unsigned long long)a1 displayStyle:(unsigned long long)a2;
- (id)initWithINImage:(id)a0;
- (id)initWithINImage:(id)a0 displayStyle:(unsigned long long)a1;
- (id)initWithImageNamed:(id)a0;
- (id)initWithImageNamed:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithImageNamed:(id)a0 renderingMode:(unsigned long long)a1 displayStyle:(unsigned long long)a2;
- (id)initWithURL:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithURL:(id)a0 renderingMode:(unsigned long long)a1 displayStyle:(unsigned long long)a2;
- (id)initWithURL:(id)a0 width:(double)a1 height:(double)a2 renderingMode:(unsigned long long)a3;
- (id)initWithURL:(id)a0 width:(double)a1 height:(double)a2 renderingMode:(unsigned long long)a3 displayStyle:(unsigned long long)a4;

@end
