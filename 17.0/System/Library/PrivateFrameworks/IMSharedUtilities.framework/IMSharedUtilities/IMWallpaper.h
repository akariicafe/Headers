@class NSString, IMWallpaperMetadata, IMWallpaper_SwiftImpl;

@interface IMWallpaper : NSObject <NSSecureCoding> {
    IMWallpaper_SwiftImpl *swiftImpl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *lowResFileName;
@property (readonly, copy, nonatomic) NSString *lowResFilePath;
@property (readonly, nonatomic) long long dataVersion;
@property (readonly, nonatomic) BOOL wallpaperExists;
@property (readonly, nonatomic) BOOL lowResWallpaperExists;
@property (readonly, nonatomic) IMWallpaperMetadata *metadata;
@property (readonly, nonatomic) BOOL contentIsSensitive;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)wallpaperData;
- (id)lowResWallpaperData;
- (id)initWithFileName:(id)a0 filePath:(id)a1 data:(id)a2 lowResFileName:(id)a3 lowResFilePath:(id)a4 lowResData:(id)a5 metadata:(id)a6 contentIsSensitive:(BOOL)a7 error:(id *)a8;
- (id)initWithFileName:(id)a0 filePath:(id)a1 lowResFileName:(id)a2 lowResFilePath:(id)a3 metadata:(id)a4 contentIsSensitive:(BOOL)a5;
- (id)publicDictionaryRepresentation;

@end
