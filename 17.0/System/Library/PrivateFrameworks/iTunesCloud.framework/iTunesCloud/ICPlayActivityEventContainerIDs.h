@class NSString;

@interface ICPlayActivityEventContainerIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long adamID;
@property (readonly, copy, nonatomic) NSString *cloudAlbumID;
@property (readonly, nonatomic) unsigned long long cloudPlaylistID;
@property (readonly, copy, nonatomic) NSString *globalPlaylistID;
@property (readonly, copy, nonatomic) NSString *playlistVersionHash;
@property (readonly, copy, nonatomic) NSString *stationHash;
@property (readonly, copy, nonatomic) NSString *stationStringID;
@property (readonly, nonatomic) long long stationID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
