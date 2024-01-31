@class NSString, NSArray;

@interface MADAutoSetConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *autoAssetSetClientName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSArray *autoAssetEntries;
@property (nonatomic) BOOL inhibitImpliedScheduling;

- (id)persistedEntryID;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForClientDomainName:(id)a0 forSetClientName:(id)a1 forAssetSetIdentifier:(id)a2 withAutoAssetEntries:(id)a3 inhibitingImpliedScheduling:(BOOL)a4;
- (id)newSummaryWithoutEntryID;

@end
