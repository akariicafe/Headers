@class NSArray;

@interface ICTableAttachmentSelection : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *rows;
@property (readonly, nonatomic) BOOL isRangeOrSpanningSelection;
@property (nonatomic) BOOL moving;
@property (nonatomic) BOOL draggingText;
@property (readonly, nonatomic) BOOL valid;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unselect;
- (BOOL)removeColumns:(id)a0 rows:(id)a1;
- (BOOL)removeColumns:(id)a0 rows:(id)a1 previousColumns:(id)a2 previousRows:(id)a3;
- (void)selectCellAtColumn:(id)a0 row:(id)a1;
- (void)selectCellRangeAtColumns:(id)a0 rows:(id)a1;
- (void)selectColumns:(id)a0;
- (void)selectRows:(id)a0;
- (void)setSelectionEqualTo:(id)a0;

@end
