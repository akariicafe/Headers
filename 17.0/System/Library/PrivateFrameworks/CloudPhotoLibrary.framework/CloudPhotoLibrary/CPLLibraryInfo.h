@class CPLMomentShare, NSDictionary, CPLAccountFlags, NSData, NSNumber, CPLFeatureVersionHistory;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *assetCounts;
@property (retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (retain, nonatomic) CPLMomentShare *momentShare;
@property (copy, nonatomic) NSNumber *featureCompatibleVersion;

+ (id)cplAdditionalSecureClassesForProperty:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(id /* block */)a0;

@end
