@class NSString;

@interface _UIDiffableDataSourceItemRenderer : NSObject <NSCopying>

@property (readonly, nonatomic) id rendererIdentifier;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) NSString *cellReuseIdentifier;
@property (readonly, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 cellClass:(Class)a1 handler:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 cellClass:(Class)a1 handler:(id /* block */)a2 cellReuseIdentifier:(id)a3;

@end
