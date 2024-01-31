@class NSString;

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *ubiquitousDatabasePath;
@property (nonatomic) BOOL supportsSyncProtocol;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *foreignDatabasePath;

+ (id)domainForSyncingMusicLibraryWithLibraryPath:(id)a0;
+ (id)domainForExtrasValues;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomainIdentifier:(id)a0 foreignDatabasePath:(id)a1;

@end
