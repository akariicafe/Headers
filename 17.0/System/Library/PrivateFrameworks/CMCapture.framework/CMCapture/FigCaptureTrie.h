@class NSDictionary, NSMutableDictionary;

@interface FigCaptureTrie : NSObject {
    BOOL _complete;
    NSMutableDictionary *_subTries;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSDictionary *children;

- (id)initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)containsPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPath:(id)a0;
- (void)enumeratePaths:(id /* block */)a0;
- (void)_addPath:(id)a0 index:(unsigned long long)a1;
- (void)_enumeratePathsWithPrefix:(id)a0 stop:(BOOL *)a1 processLeaf:(id /* block */)a2;
- (id)_extractFrom:(id)a0 writeTarget:(id)a1 destinationMutability:(int)a2 overwrite:(BOOL)a3;
- (BOOL)containsParentPath:(id)a0;
- (id)extractFrom:(id)a0;
- (void)extractFrom:(id)a0 writeInto:(id)a1 assumeMutable:(BOOL)a2 overwrite:(BOOL)a3;
- (id)generatePathArray;
- (id)getSubTrie:(id)a0;
- (id)initWithPathArray:(id)a0;

@end
