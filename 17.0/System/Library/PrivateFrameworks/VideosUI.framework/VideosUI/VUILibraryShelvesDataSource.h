@class NSSet, NSDictionary;
@protocol VUIShelvesDataSourceDelegate;

@interface VUILibraryShelvesDataSource : VUILibraryDataSource

@property (retain, nonatomic) NSSet *shelfTypes;
@property (retain, nonatomic) NSDictionary *dataSourcesByShelfType;
@property (weak, nonatomic) id<VUIShelvesDataSourceDelegate> shelvesDelegate;

- (void).cxx_destruct;
- (id)initWithValidShelfTypes:(id)a0;

@end
