@class NSString, NSMutableArray;

@interface CSVMapper : CMMapper {
    NSMutableArray *mRows;
    NSString *mFileName;
    unsigned long long mColumnCount;
    struct CGSize { double width; double height; } mPageSize;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })pageSize;
- (id)initWithRows:(id)a0 fileName:(id)a1 columnCount:(unsigned long long)a2 archiver:(id)a3;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
