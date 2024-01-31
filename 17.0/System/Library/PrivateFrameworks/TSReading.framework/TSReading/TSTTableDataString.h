@class NSString;

@interface TSTTableDataString : TSTTableDataObject {
    NSString *mString;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithString:(id)a0;

@end
