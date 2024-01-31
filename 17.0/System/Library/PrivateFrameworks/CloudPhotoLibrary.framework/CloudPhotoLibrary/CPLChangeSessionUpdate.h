@class NSString, NSDate;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *libraryVersion;
@property (readonly, nonatomic) NSDate *queuedDate;
@property (readonly, nonatomic) NSString *statusDescription;

- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)a0;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStore:(id)a0;
- (id)storageForStatusInStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;

@end
