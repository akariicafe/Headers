@class NSString;
@protocol MSPImmutableObject, MSPMutableObject;

@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate>

@property (readonly, nonatomic) id<MSPMutableObject> updatedObject;
@property (readonly, nonatomic) id<MSPImmutableObject> updatedImmutableObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUpdatedImmutableObject:(id)a0;
- (id)initWithUpdatedObject:(id)a0;
- (void)useImmutableObjectsFromMap:(id)a0 intermediateMutableObjectTransferBlock:(id /* block */)a1;

@end
