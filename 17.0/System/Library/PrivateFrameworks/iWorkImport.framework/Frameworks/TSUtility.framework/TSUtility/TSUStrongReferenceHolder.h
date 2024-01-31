@class NSMutableArray, TSUCustomCallBackDictionary;

@interface TSUStrongReferenceHolder : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (readonly, nonatomic) NSMutableArray *strongReferences;
@property (readonly, nonatomic) TSUCustomCallBackDictionary *objectUniquingDictionary;

+ (id)strongReferenceHolder;

- (id)init;
- (void).cxx_destruct;
- (id)uniqueReferenceForObject:(id)a0;

@end
