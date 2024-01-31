@interface TSTTableDataCustomFormat : TSTTableDataObject {
    void *mCustomFormat;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithCustomFormat:(void *)a0;

@end
