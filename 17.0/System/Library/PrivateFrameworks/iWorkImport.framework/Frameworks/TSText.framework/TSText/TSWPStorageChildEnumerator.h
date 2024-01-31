@class NSArray, TSWPStorage;

@interface TSWPStorageChildEnumerator : NSEnumerator

@property (retain, nonatomic) TSWPStorage *storage;
@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSArray *charOffsetArray;

- (id)initWithStorage:(id)a0;
- (id)nextObject;
- (void).cxx_destruct;

@end
