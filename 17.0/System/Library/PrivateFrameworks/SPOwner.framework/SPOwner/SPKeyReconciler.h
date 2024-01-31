@class NSDictionary, NSMutableArray;

@interface SPKeyReconciler : NSObject {
    NSDictionary *_backingDictionary;
    NSMutableArray *_keyIndices;
}

- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)reconcileKey:(id)a0 matchedIndex:(unsigned int *)a1 sequence:(unsigned char *)a2 error:(unsigned char *)a3;
- (void).cxx_destruct;

@end
