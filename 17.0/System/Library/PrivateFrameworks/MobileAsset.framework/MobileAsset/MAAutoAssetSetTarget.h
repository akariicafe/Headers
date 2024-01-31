@class NSString, NSArray;

@interface MAAutoAssetSetTarget : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *minTargetOSVersion;
@property (retain, nonatomic) NSString *maxTargetOSVersion;
@property (retain, nonatomic) NSArray *autoAssetEntries;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForMinTargetOSVersion:(id)a0 toMaxTargetOSVersion:(id)a1 asEntriesWhenTargeting:(id)a2;

@end
