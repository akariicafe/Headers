@class CPLChangeBatch, NSString, NSDictionary, NSMutableDictionary, NSSet, NSMutableSet;
@protocol NSFastEnumeration;

@interface CPLExtractedBatch : NSObject <NSSecureCoding> {
    NSDictionary *_pushContexts;
    NSMutableDictionary *_mutablePushContexts;
    NSSet *_untrustableScopedIdentifiers;
    NSMutableSet *_mutableUntrustableScopedIndentifiers;
    BOOL _resourceSizeIsCalculated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CPLChangeBatch *batch;
@property (readonly, nonatomic) unsigned long long resourceSize;
@property (nonatomic, getter=isFull) BOOL full;
@property (readonly, nonatomic) BOOL batchCanLowerQuota;
@property (readonly, nonatomic) id<NSFastEnumeration> uploadIdentifiers;
@property (copy, nonatomic) NSString *clientCacheIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)enumeratePushContextsWithBlock:(id /* block */)a0;
- (void)addChange:(id)a0 fromStorage:(id)a1;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)a0;
- (void)forceScopeIndexOnAllRecordsTo:(long long)a0;
- (id)uploadIdentifierForChange:(id)a0;

@end
