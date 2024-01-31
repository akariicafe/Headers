@class NSNumber, NSString;

@interface BDSBookWidgetData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *totalDuration;
@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *pageProgressionDirection;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSNumber *readingProgress;
@property (copy, nonatomic) NSString *libraryAssetType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)hasSignificantDifferenceWith:(id)a0;
- (id)initWithAssetID:(id)a0 title:(id)a1 pageProgressionDirection:(id)a2 coverURL:(id)a3 readingProgress:(id)a4 libraryAssetType:(id)a5;
- (id)initWithAssetID:(id)a0 title:(id)a1 pageProgressionDirection:(id)a2 coverURL:(id)a3 readingProgress:(id)a4 totalDuration:(id)a5 libraryAssetType:(id)a6;

@end
