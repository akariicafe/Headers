@class NSString;

@interface CKLRUCache : CPLRUDictionary <CKCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithMaximumCapacity:(unsigned long long)a0;

@end
