@class NSString;

@interface VKImageDataRequirements : NSObject

@property (class, readonly, nonatomic) VKImageDataRequirements *stickerRequirements;
@property (class, readonly, nonatomic) VKImageDataRequirements *stickerThumbnailRequirements;

@property (retain, nonatomic) NSString *uti;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxDataLength;

- (void).cxx_destruct;

@end
