@class NSArray, TSCH3DScenePropertyAccessor, TSCH3DCamera, TSCH3DSceneObject, NSMutableDictionary, NSObject, TSUNoCopyDictionary, NSMutableArray;
@protocol TSCH3DSceneDelegate, TSCH3DScenePropertyAccessorFactory;

@interface TSCH3DScene : NSObject {
    NSObject<TSCH3DScenePropertyAccessorFactory> *_accessorFactory;
    TSCH3DScenePropertyAccessor *_accessor;
    NSMutableDictionary *_enumeratorMap;
    NSMutableDictionary *_propertiesMap;
    TSUNoCopyDictionary *_delegateMap;
    TSCH3DSceneObject *_main;
    NSMutableArray *_objects;
    TSCH3DCamera *_camera;
}

@property (retain, nonatomic) TSCH3DScene *original;
@property (retain, nonatomic) NSObject<TSCH3DScenePropertyAccessorFactory> *accessorFactory;
@property (retain, nonatomic) TSCH3DScenePropertyAccessor *accessor;
@property (retain, nonatomic) TSCH3DSceneObject *main;
@property (retain, nonatomic) TSCH3DCamera *camera;
@property (readonly, nonatomic) id<TSCH3DSceneDelegate> delegate;
@property (readonly, nonatomic) NSArray *debugObjects;

+ (id)scene;

- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objects;
- (unsigned long long)count;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })transform;
- (void)removeObjectsOfClass:(Class)a0;
- (id)description;
- (id)clone;
- (id)delegateMap;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)renderCache;
- (void)resetObjects;
- (void)resetProperties;
- (void)resetEnumerator;
- (void)overrideObjects;
- (void)copyPropertiesFromScene:(id)a0;
- (id)delegateForObject:(id)a0;
- (id)delegateForSceneObject:(id)a0;
- (void)enumerateAllObjectsUsingBlock:(id /* block */)a0;
- (id)enumeratorForType:(id)a0;
- (id)enumeratorMap;
- (id)extractObjects:(BOOL)a0 ofClasses:(id)a1;
- (id)extractObjectsNotOfClass:(Class)a0;
- (id)extractObjectsNotOfClasses:(id)a0;
- (id)extractObjectsOfClass:(Class)a0;
- (id)extractObjectsOfClasses:(id)a0;
- (void)makeDelegatesFromDelegator:(id)a0;
- (id)mutablePropertiesForType:(id)a0;
- (id)partForType:(id)a0;
- (id)propertiesForType:(id)a0;
- (id)propertiesMap;
- (id)reallocateObjects;
- (id)removeObjects:(BOOL)a0 ofClasses:(id)a1 addTo:(id)a2;
- (id)removeObjects:(BOOL)a0 ofClasses:(id)a1 into:(id)a2;
- (void)removeObjectsNotOfClass:(Class)a0;
- (void)resetDelegates;
- (id)returnRemoved:(BOOL)a0 removeObjectsPassingTest:(id /* block */)a1;
- (void)setDelegate:(id)a0 forObject:(id)a1;
- (void)setDelegate:(id)a0 forSceneObject:(id)a1;
- (void)setEnumerator:(id)a0 forType:(id)a1;
- (void)setEnumerator:(id)a0 properties:(id)a1 forType:(id)a2;
- (void)setPart:(id)a0 forType:(id)a1;
- (void)setProperties:(id)a0 forType:(id)a1;

@end
