@interface BRCBouncingReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int BouncingCountOnSameType;
@property unsigned int BouncingCountFromDirToLnk;
@property unsigned int BouncingCountFromDirToAls;
@property unsigned int BouncingCountFromDirToPkg;
@property unsigned int BouncingCountFromDirToDoc;
@property unsigned int BouncingCountFromLnkToDir;
@property unsigned int BouncingCountFromLnkToAls;
@property unsigned int BouncingCountFromLnkToPkg;
@property unsigned int BouncingCountFromLnkToDoc;
@property unsigned int BouncingCountFromAlsToDir;
@property unsigned int BouncingCountFromAlsToLnk;
@property unsigned int BouncingCountFromAlsToPkg;
@property unsigned int BouncingCountFromAlsToDoc;
@property unsigned int BouncingCountFromPkgToDir;
@property unsigned int BouncingCountFromPkgToLnk;
@property unsigned int BouncingCountFromPkgToAls;
@property unsigned int BouncingCountFromPkgToDoc;
@property unsigned int BouncingCountFromDocToDir;
@property unsigned int BouncingCountFromDocToLnk;
@property unsigned int BouncingCountFromDocToAls;
@property unsigned int BouncingCountFromDocToPkg;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
