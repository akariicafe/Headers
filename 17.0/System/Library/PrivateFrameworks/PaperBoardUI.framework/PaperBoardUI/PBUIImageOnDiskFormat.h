@class NSString, NSDictionary;

@interface PBUIImageOnDiskFormat : NSObject <NSCopying>

@property (class, readonly, nonatomic) PBUIImageOnDiskFormat *defaultATX;
@property (class, readonly, nonatomic) PBUIImageOnDiskFormat *png;
@property (class, readonly, nonatomic) PBUIImageOnDiskFormat *defaultFormat;

@property (readonly, copy, nonatomic) NSString *filenameExtension;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *destinationOptions;
@property (readonly, copy, nonatomic) NSDictionary *addImageOptions;

+ (id)atxWithBlockSize:(unsigned int)a0 twiddling:(BOOL)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolveAddImageOptionsForImage:(struct CGImage { } *)a0;
- (id)formatByAppendingDestinationOptions:(id)a0 addImageOptions:(id)a1;
- (id)initWithTypeIdentifier:(id)a0 filenameExtension:(id)a1 destinationOptions:(id)a2 addImageOptions:(id)a3;
- (id)initWithTypeRecord:(id)a0 destinationOptions:(id)a1 addImageOptions:(id)a2;
- (id)resolveDestinationOptionsForImage:(struct CGImage { } *)a0;

@end
