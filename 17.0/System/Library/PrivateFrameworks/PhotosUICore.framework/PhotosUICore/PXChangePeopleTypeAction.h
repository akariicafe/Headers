@protocol PXFastEnumeration;

@interface PXChangePeopleTypeAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

@property (readonly, nonatomic) long long type;
@property (nonatomic) unsigned long long firstManualOrder;

- (id)collections;
- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPeople:(id)a0 type:(long long)a1;
- (id)localizedActionName;
- (void)performUndo:(id /* block */)a0;

@end
