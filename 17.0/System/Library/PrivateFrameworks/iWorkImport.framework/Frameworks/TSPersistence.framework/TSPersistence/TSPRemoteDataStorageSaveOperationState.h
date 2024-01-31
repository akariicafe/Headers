@protocol TSPDataStorage;

@interface TSPRemoteDataStorageSaveOperationState : NSObject

@property (readonly, nonatomic) id<TSPDataStorage> originalPackageDataStorage;
@property (readonly, nonatomic) id<TSPDataStorage> updatedPackageDataStorage;
@property (readonly, nonatomic) unsigned long long changeCount;

- (void).cxx_destruct;
- (id)initWithChangeCount:(unsigned long long)a0 originalPackageDataStorage:(id)a1 updatedPackageDataStorage:(id)a2;

@end
