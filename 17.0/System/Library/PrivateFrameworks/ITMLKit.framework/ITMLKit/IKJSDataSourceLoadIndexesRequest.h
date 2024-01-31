@class JSValue, IKJSDataSource;

@interface IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject <IKJSDataSourceLoadIndexesRequest> {
    int _state;
    IKJSDataSource *_dataSource;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, weak, nonatomic) JSValue *dataSource;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void)close:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDataSource:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
