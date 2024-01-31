@class NSString, NSArray, NSDate;

@interface MADAutoSetAtomicInstance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *autoAssetSetClientName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) NSString *atomicInstanceUUID;
@property (readonly, retain, nonatomic) NSString *subAtomicFromAtomicInstanceUUID;
@property (retain, nonatomic) NSDate *instanceCreationDate;
@property (nonatomic) long long instanceCreationIndex;
@property (retain, nonatomic) NSArray *instanceEntries;
@property (retain, nonatomic) NSString *activeSetJobUUID;
@property (nonatomic) BOOL catalogLookupNewerAvailable;
@property (nonatomic) BOOL allContentDownloaded;
@property (nonatomic) BOOL awaitingLastReferenceNewerFound;
@property (nonatomic) BOOL awaitingLastReferenceAltered;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForClientDomainName:(id)a0 forSetClientName:(id)a1 forAssetSetIdentifier:(id)a2 withAtomicInstanceUUID:(id)a3 asSubAtomicFrom:(id)a4 originallyCreatedOnDate:(id)a5 withCreationIndex:(long long)a6 representingInstanceEntries:(id)a7 inUseBySetJob:(id)a8;
- (id)newSummaryWithoutEntryID;

@end
