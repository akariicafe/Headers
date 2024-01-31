@class _UIDiffableDataSourceOutlineSectionController;

@interface ICSectionController : NSObject

@property (readonly, nonatomic) _UIDiffableDataSourceOutlineSectionController *outlineSectionController;
@property (readonly, nonatomic) unsigned long long sectionControllerType;

- (id)snapshotForSection:(id)a0;
- (void).cxx_destruct;
- (id)initWithDiffableDataSource:(id)a0 sectionControllerType:(unsigned long long)a1;

@end
