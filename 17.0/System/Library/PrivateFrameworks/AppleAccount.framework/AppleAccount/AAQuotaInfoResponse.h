@class NSArray, NSString, NSURL, NSDictionary, NSNumber;

@interface AAQuotaInfoResponse : AAResponse {
    NSDictionary *_quotaInfo;
    NSDictionary *_endPoints;
    NSDictionary *_storageInfo;
    NSDictionary *_storageMeterLabel;
}

@property (readonly, nonatomic) NSArray *usage;
@property (readonly, nonatomic) NSURL *manageStorageURL;
@property (readonly, nonatomic) NSNumber *availableStorageInBytes;
@property (readonly, nonatomic) NSNumber *usedStorageInBytes;
@property (readonly, nonatomic) NSNumber *totalStorageInBytes;
@property (readonly, nonatomic) BOOL hasMaxTier;
@property (readonly, nonatomic) NSString *displayLabel;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)_initFromResponseDict;
- (void)updateAccount:(id)a0 completion:(id /* block */)a1;

@end
