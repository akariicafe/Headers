@class NSMutableDictionary, NSString, NSMutableOrderedSet, PLManagedObject, PHPhotoLibrary;

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing>

@property (readonly, nonatomic) PLManagedObject *backingManagedObject;
@property (retain, nonatomic) NSMutableOrderedSet *ignoredKeys;
@property (retain, nonatomic) NSMutableDictionary *modifiedKeyValues;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithPLManagedObject:(id)a0 photoLibrary:(id)a1;
- (id)mutableAccessingCopy;
- (id)newObjectWithPropertySets:(id)a0;

@end
