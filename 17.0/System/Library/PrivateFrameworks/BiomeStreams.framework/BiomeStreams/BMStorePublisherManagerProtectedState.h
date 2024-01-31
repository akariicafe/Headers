@class BMStreamDatastoreReader, NSMutableDictionary;

@interface BMStorePublisherManagerProtectedState : NSObject

@property (retain, nonatomic) BMStreamDatastoreReader *localDatastore;
@property (retain, nonatomic) NSMutableDictionary *remoteDatastores;

- (id)init;
- (void).cxx_destruct;

@end
