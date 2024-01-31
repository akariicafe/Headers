@class NSString, NSIndexPath, UIDragItem;

@interface SFFluidCollectionViewDropItem : NSObject <SFFluidCollectionViewDropItem>

@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) NSIndexPath *sourceIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
