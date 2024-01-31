@class NSSet, NSMutableSet, NSMapTable;

@interface SBFolderTransaction : NSObject {
    NSMapTable *_removedIcons;
}

@property (readonly, copy, nonatomic) NSMutableSet *addedIcons;
@property (readonly, copy, nonatomic) NSSet *removedIcons;
@property (readonly, copy, nonatomic) NSMutableSet *movedIcons;

- (void)iconList:(id)a0 didRemoveIcon:(id)a1;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (void).cxx_destruct;

@end
