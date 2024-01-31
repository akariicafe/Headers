@class NSArray, NSMutableArray;

@interface MSVMarkdownTable : NSObject {
    NSMutableArray *_columnHeaders;
    NSMutableArray *_columnAlignments;
    NSMutableArray *_rows;
}

@property (readonly, copy, nonatomic) NSArray *columnHeaders;
@property (readonly, copy, nonatomic) NSArray *rows;

+ (id)escapedString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addRow:(id)a0;
- (void)insertColumnWithHeader:(id)a0 atIndex:(long long)a1;
- (id)_formatString:(id)a0 withWidth:(long long)a1 alignment:(long long)a2;
- (void)addColumnWithHeader:(id)a0;
- (long long)alignmentForColumnAtIndex:(long long)a0;
- (id)cellAtColumn:(long long)a0 row:(long long)a1;
- (void)insertRow:(id)a0 atIndex:(long long)a1;
- (void)removeColumnAtIndex:(long long)a0;
- (void)removeRowAtIndex:(long long)a0;
- (id)renderMarkdownWithOptions:(unsigned long long)a0;
- (void)setAlignment:(long long)a0 forColumnAtIndex:(long long)a1;
- (void)setCell:(id)a0 atColumn:(long long)a1 row:(long long)a2;

@end
