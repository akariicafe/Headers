@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying, NSMutableCopying> {
    struct sqlite3_snapshot { unsigned char x0[48]; } *_s;
    int _externalReferences;
    int _flags;
}

@property (readonly, nonatomic) const void *bytes;

- (unsigned long long)hash;
- (void)dealloc;
- (id)mutableCopy;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
