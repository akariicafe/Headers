@class NSString, NSNumber;

@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL entireMusicLibrary;
@property (readonly, copy, nonatomic) NSString *playlistName;
@property (readonly, nonatomic) NSNumber *persistentIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntireMusicLibrary;
- (id)initWithPlaylistName:(id)a0 persistentIdentifier:(id)a1;

@end
