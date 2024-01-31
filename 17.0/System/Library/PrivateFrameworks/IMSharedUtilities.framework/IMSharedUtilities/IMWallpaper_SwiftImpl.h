@class NSString, NSDictionary;

@interface IMWallpaper_SwiftImpl : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ filePathKey;
    void /* unknown type, empty encoding */ fileNameKey;
    void /* unknown type, empty encoding */ lowResFilePathKey;
    void /* unknown type, empty encoding */ lowResFileNameKey;
    void /* unknown type, empty encoding */ dataVersionKey;
    void /* unknown type, empty encoding */ highResKey;
    void /* unknown type, empty encoding */ metadataKey;
    void /* unknown type, empty encoding */ contentIsSensitiveKey;
    void /* unknown type, empty encoding */ fileName;
    void /* unknown type, empty encoding */ filePath;
    void /* unknown type, empty encoding */ lowResFileName;
    void /* unknown type, empty encoding */ lowResFilePath;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSString *lowResFileName;
@property (nonatomic, readonly) NSString *lowResFilePath;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ dataVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ metadata;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ contentIsSensitive;
@property (nonatomic, readonly) BOOL wallpaperExists;
@property (nonatomic, readonly) BOOL lowResWallpaperExists;
@property (nonatomic, readonly) NSDictionary *publicDictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fetchLowResWallpaperDataAndReturnError:(id *)a0;
- (id)fetchWallpaperDataAndReturnError:(id *)a0;
- (id)initWithFileName:(id)a0 filePath:(id)a1 data:(id)a2 lowResFileName:(id)a3 lowResFilePath:(id)a4 lowResData:(id)a5 metadata:(id)a6 contentIsSensitive:(BOOL)a7 error:(id *)a8;
- (id)initWithFileName:(id)a0 filePath:(id)a1 lowResFileName:(id)a2 lowResFilePath:(id)a3 metadata:(id)a4 contentIsSensitive:(BOOL)a5;

@end
