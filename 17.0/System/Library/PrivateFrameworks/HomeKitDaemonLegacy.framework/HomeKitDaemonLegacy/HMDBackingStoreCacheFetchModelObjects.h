@class NSArray, NSUUID, NSString, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchModelObjects : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (copy, nonatomic) id /* block */ fetchResult;
@property (retain, nonatomic) NSArray *uuids;
@property (retain, nonatomic) NSArray *names;
@property (retain, nonatomic) NSUUID *parent;
@property (retain, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 names:(id)a1 fetchResult:(id /* block */)a2;
- (id)initWithGroup:(id)a0 parent:(id)a1 type:(id)a2 fetchResult:(id /* block */)a3;
- (id)initWithGroup:(id)a0 uuids:(id)a1 fetchResult:(id /* block */)a2;
- (id)initWithNames:(id)a0 fetchResult:(id /* block */)a1;
- (id)initWithParent:(id)a0 type:(id)a1 fetchResult:(id /* block */)a2;
- (id)initWithUUIDs:(id)a0 fetchResult:(id /* block */)a1;
- (id)mainReturningError;

@end
