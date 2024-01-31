@class NSMutableDictionary;
@protocol PXReusableObjectPoolDelegate;

@interface PXReusableObjectPool : NSObject {
    struct { BOOL respondsToDidCreateReusableObject; BOOL respondsToObjectBecameReusable; BOOL respondsToObjectPreparedForReuse; } _delegateFlags;
}

@property (readonly, nonatomic) NSMutableDictionary *objectCreationBlocksByReuseIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *maximumPoolSizeByReuseIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *reusableObjectsByReuseIdentifier;
@property (weak, nonatomic) id<PXReusableObjectPoolDelegate> delegate;

- (id)init;
- (void)registerReusableObjectForReuseIdentifier:(long long)a0 creationHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)registerReusableObjectForReuseIdentifier:(long long)a0 maximumPoolSize:(long long)a1 creationHandler:(id /* block */)a2;
- (id)checkOutReusableObjectWithReuseIdentifier:(long long)a0;
- (void)checkInReusableObject:(id)a0;
- (void)removeAllReusableObjectsWithReuseIdentifier:(long long)a0;

@end
