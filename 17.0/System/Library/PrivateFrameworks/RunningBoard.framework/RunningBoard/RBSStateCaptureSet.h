@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSet : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_stateCaptureSegments;
}

@property (readonly, copy, nonatomic) NSSet *itemsCopy;

- (id)init;
- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void).cxx_destruct;

@end
