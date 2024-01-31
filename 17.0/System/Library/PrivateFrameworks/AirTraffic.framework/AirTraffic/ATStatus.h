@class NSString;

@interface ATStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *libraryID;
@property (copy, nonatomic) NSString *dataClass;
@property (nonatomic) unsigned int syncStage;
@property (nonatomic) unsigned int syncType;
@property (nonatomic) float progress;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) unsigned long long completedAssetCount;
@property (nonatomic) unsigned long long totalAssetCount;
@property (nonatomic) unsigned long long totalItemCount;
@property (nonatomic, getter=isWirelessSync) BOOL wirelessSync;
@property (nonatomic, getter=isAutomaticSync) BOOL automaticSync;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLibraryID:(id)a0 dataClass:(id)a1;

@end
