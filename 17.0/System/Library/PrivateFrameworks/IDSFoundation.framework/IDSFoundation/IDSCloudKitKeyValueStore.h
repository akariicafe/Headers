@class IDSCKContainer, NSObject;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyValueStore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKContainer *container;

- (void).cxx_destruct;
- (void)setData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)fetchDataForKey:(id)a0 completion:(id /* block */)a1;
- (void)fetchObjectForKey:(id)a0 completion:(id /* block */)a1;
- (id)initWithContainer:(id)a0 queue:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
