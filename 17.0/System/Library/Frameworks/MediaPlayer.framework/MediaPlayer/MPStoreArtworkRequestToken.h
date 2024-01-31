@class NSString, ICStoreVideoArtworkInfo, NSURL, ICStoreArtworkInfo;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long artworkInfoType;
@property (copy, nonatomic) ICStoreArtworkInfo *imageArtworkInfo;
@property (copy, nonatomic) ICStoreVideoArtworkInfo *videoArtworkInfo;
@property (copy, nonatomic) NSString *cropStyle;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *sourceEditorialArtworkKind;
@property (copy, nonatomic) NSURL *artworkURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithImageArtworkInfo:(id)a0;
+ (id)tokenWithVideoArtworkInfo:(id)a0;

- (id)init;
- (id)stringRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
