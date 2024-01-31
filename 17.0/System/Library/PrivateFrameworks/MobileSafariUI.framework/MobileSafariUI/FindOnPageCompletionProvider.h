@protocol FindOnPageCompletionProviderDataSource;

@interface FindOnPageCompletionProvider : CompletionProvider

@property (weak, nonatomic) id<FindOnPageCompletionProviderDataSource> dataSource;
@property (readonly, nonatomic) long long parsecQueryID;

- (void).cxx_destruct;
- (id)completionsForQuery:(id)a0;
- (void)setQueryToComplete:(id)a0;

@end
