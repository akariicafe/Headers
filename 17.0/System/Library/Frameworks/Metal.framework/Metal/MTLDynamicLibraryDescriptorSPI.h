@class NSURL;
@protocol MTLLibrary;

@interface MTLDynamicLibraryDescriptorSPI : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLLibrary> library;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long options;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
