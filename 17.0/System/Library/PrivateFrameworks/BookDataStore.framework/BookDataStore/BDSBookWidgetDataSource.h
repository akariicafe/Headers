@interface BDSBookWidgetDataSource : NSObject <BDSBookWidgetDataProviding>

- (void)getBookWidgetDataWithLimit:(long long)a0 completion:(id /* block */)a1;

@end
