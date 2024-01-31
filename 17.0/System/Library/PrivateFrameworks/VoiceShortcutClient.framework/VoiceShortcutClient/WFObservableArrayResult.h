@class WFResultQuery, NSArray, WFDatabaseResultState;

@interface WFObservableArrayResult : WFObservableResult

@property (readonly, nonatomic) WFDatabaseResultState *resultState;
@property (readonly, nonatomic) WFResultQuery *query;
@property (readonly, nonatomic) NSArray *values;

+ (id)getEmptyResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2;
+ (void)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
+ (id)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
+ (void)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 roundedIcon:(BOOL)a3 completionHandler:(id /* block */)a4;

- (id)description;
- (void).cxx_destruct;
- (void)handleChangeNotification:(id)a0;
- (id)initWithValueType:(Class)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 initialValues:(id)a2 query:(id)a3 resultState:(id)a4;

@end
