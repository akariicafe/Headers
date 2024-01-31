@class NSString;

@interface TSCHChartUIState : NSObject <NSCopying, TSKUIState>

@property (readonly, nonatomic) unsigned long long lastRowSelectedInCDE;
@property (readonly, nonatomic) unsigned long long lastRowCountInCDE;
@property (readonly, nonatomic) unsigned long long lastColSelectedInCDE;
@property (readonly, nonatomic) unsigned long long lastColCountInCDE;
@property (readonly, nonatomic) unsigned long long multiDataSetIndex;
@property (readonly, nonatomic) BOOL useFullKeyboard;
@property (readonly, nonatomic) BOOL isValidMultiDataSetIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0;
- (void)resetForInitialViewing;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 colRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useFullKeyboard:(BOOL)a2;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 colRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useFullKeyboard:(BOOL)a2 multiDataSetIndex:(unsigned long long)a3;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 colRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useFullKeyboard:(BOOL)a2 multiDataSetIndex:(unsigned long long)a3 validIndex:(BOOL)a4;

@end
