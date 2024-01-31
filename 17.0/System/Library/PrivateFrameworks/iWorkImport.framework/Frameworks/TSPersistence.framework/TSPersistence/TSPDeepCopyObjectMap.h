@class NSMapTable;

@interface TSPDeepCopyObjectMap : NSObject {
    NSMapTable *_archivedObjects;
    NSMapTable *_originalIdentifierToDeepCopyObject;
    NSMapTable *_deepCopyIdentifierToOriginalObject;
}

- (void).cxx_destruct;
- (void)didReadObjects:(id)a0;
- (id)deepCopyForObject:(id)a0;
- (void)didWriteObjects:(id)a0;
- (id)objectForDeepCopy:(id)a0;

@end
