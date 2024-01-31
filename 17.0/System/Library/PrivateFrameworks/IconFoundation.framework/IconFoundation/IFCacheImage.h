@class NSUUID, NSData;

@interface IFCacheImage : IFConcreteImage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;

- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3 iconSize:(struct CGSize { double x0; double x1; })a4;
- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
