@class IMWallpaper, NSString, _NSAttributedStringGrammarInflection, NSDate, IMNicknameAvatarImage;

@interface IMNickname : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (retain, nonatomic) IMNicknameAvatarImage *avatar;
@property (retain, nonatomic) IMWallpaper *wallpaper;
@property (retain, nonatomic) _NSAttributedStringGrammarInflection *pronouns;
@property (retain, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *archivedDate;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *nameHash;
@property (readonly, nonatomic) NSString *imageHash;
@property (readonly, nonatomic) NSString *wallpaperImageHash;
@property (readonly, nonatomic) NSString *wallpaperLowResImageHash;
@property (readonly, nonatomic) NSString *concatenatedImageHash;
@property (nonatomic) BOOL didUseAvatarImageForWallpaper;

+ (id)nameHashWithFirstName:(id)a0 lastName:(id)a1;
+ (id)uniqueFilePathForWritingImageData;
+ (id)uniqueFilePathForWritingWallpaperData;

- (id)dataRepresentation;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isUpdateFromNickname:(id)a0 withOptions:(unsigned long long)a1;
- (id)initWithMeContact:(id)a0;
- (id)_imageHashCreatedInChunks:(id)a0;
- (id)_sharingState;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 avatar:(id)a2 pronouns:(id)a3;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 avatar:(id)a2 pronouns:(id)a3 wallpaper:(id)a4;
- (id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)a0;
- (id)publicDictionaryRepresentation;
- (id)publicDictionaryRepresentationWithoutAvatar;
- (void)updateNameFromContact:(id)a0;

@end
