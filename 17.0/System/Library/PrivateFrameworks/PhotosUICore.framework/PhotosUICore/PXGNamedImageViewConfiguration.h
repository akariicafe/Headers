@class NSString;

@interface PXGNamedImageViewConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long contentMode;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
