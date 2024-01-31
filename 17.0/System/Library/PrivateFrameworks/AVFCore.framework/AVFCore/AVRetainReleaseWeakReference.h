@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)init;
- (void)dealloc;
- (id)initWithReferencedObject:(id)a0;
- (id)description;
- (id)referencedObject;

@end
