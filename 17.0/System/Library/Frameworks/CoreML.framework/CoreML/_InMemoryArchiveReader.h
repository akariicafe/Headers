@class NSString, NSArray;

@interface _InMemoryArchiveReader : NSObject <_ArchiveReader> {
    struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } _network;
}

@property (readonly, copy, nonatomic) NSString *modelPath;
@property (readonly, nonatomic) NSArray *layerInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelName;
+ (id)readerFromArchiver:(void *)a0 error:(id *)a1;

- (id)initWithNetwork:(struct shared_ptr<Espresso::net> { struct net *x0; struct __shared_weak_count *x1; })a0;
- (id)loadUpdatableParams:(id *)a0;
- (id).cxx_construct;
- (void)copyLayerShapesToContainer:(id)a0;
- (void).cxx_destruct;
- (id)transformParams;

@end
