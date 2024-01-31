@class NSArray, NSMutableDictionary;
@protocol SXJSONObjectMergerClassProviding;

@interface SXJSONObjectMerger : NSObject

@property (readonly, nonatomic) id<SXJSONObjectMergerClassProviding> classProvider;
@property (readonly, nonatomic) NSArray *exclusionKeys;
@property (readonly, nonatomic) NSMutableDictionary *transformers;

- (id)appendKey:(id)a0 keyPath:(id)a1;
- (id)mergeObjects:(id)a0;
- (id)replaceLastKeyOfKeyPath:(id)a0 withKey:(id)a1;
- (void)transformObject:(id)a0 otherObject:(id)a1 transformer:(id)a2 key:(id)a3 keyPath:(id)a4 dictionary:(id)a5;
- (void)removeTransformerForKeyPath:(id)a0;
- (id)mergeDictionary:(id)a0 withDictionary:(id)a1 keyPath:(id)a2;
- (void)addTransformer:(id)a0 keyPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithObjectClass:(Class)a0 exclusionKeys:(id)a1;
- (id)initWithClassProvider:(id)a0 exclusionKeys:(id)a1;

@end
