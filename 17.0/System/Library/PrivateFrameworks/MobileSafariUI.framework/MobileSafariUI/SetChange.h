@class NSIndexSet, NSSet;

@interface SetChange : NSObject

@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) NSIndexSet *modifiedIndexes;
@property (readonly, nonatomic) NSSet *moves;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isSingleDelete) BOOL singleDelete;
@property (readonly, nonatomic, getter=isInsertAll) BOOL insertAll;
@property (readonly, nonatomic, getter=isDeleteAll) BOOL deleteAll;

+ (id)emptyChange;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToChange:(id)a0;
- (id)initAsDeleteAllWithIndexes:(id)a0;
- (id)initAsInsertAllWithIndexes:(id)a0;
- (id)initWithInsertedIndexes:(id)a0 deletedIndexes:(id)a1 modifiedIndexes:(id)a2 moves:(id)a3;

@end
