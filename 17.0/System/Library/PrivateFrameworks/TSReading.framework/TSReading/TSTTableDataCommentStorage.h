@class TSDCommentStorage;

@interface TSTTableDataCommentStorage : TSTTableDataObject {
    TSDCommentStorage *mCommentStorage;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithCommentStorage:(id)a0;

@end
