@class NSString, NSData;

@interface BlastDoorNicknameInformation : NSObject {
    void /* unknown type, empty encoding */ nicknameInformation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *recordKey;
@property (nonatomic, readonly) NSData *decryptionKey;
@property (nonatomic, readonly) BOOL includesWallpaperData;
@property (nonatomic, readonly) BOOL has_updateInfoIncluded;
@property (nonatomic, readonly) long long updateInfoIncluded;
@property (nonatomic, readonly) NSString *messageType;
@property (nonatomic, readonly) NSData *wallpaperTag;
@property (nonatomic, readonly) NSData *lowResWallpaperTag;
@property (nonatomic, readonly) NSData *wallpaperMetadataTag;

- (id)init;
- (void).cxx_destruct;

@end
