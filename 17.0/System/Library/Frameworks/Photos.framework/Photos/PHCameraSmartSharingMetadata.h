@class NSString, NSArray, NSDate;

@interface PHCameraSmartSharingMetadata : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) long long version;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *libraryScopeLocalIdentifier;
@property (readonly, nonatomic) BOOL hasActiveLibraryScope;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSArray *filterContactIDs;
@property (readonly, nonatomic) NSArray *homeLocations;
@property (readonly, nonatomic) NSArray *frequentLocations;
@property (readonly, nonatomic) BOOL locationShiftingRequired;

+ (id)_metadataFileURLForPhotoLibrary:(id)a0;
+ (id)_readMetadataFromFileURL:(id)a0;
+ (id)retrieveMetadataForPhotoLibrary:(id)a0;
+ (BOOL)storeMetadata:(id)a0 forPhotoLibrary:(id)a1 error:(id *)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLibraryScopeIdentifier:(id)a0 filterContactIDs:(id)a1 homeLocations:(id)a2 isOnTrip:(BOOL)a3;
- (id)initWithLibraryScopeIdentifier:(id)a0 identities:(id)a1 homeLocations:(id)a2 frequentLocations:(id)a3 locationShiftingRequired:(BOOL)a4;

@end
