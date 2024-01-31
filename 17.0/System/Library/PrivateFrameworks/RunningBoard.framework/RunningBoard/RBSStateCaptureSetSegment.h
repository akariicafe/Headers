@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (id)init;
- (void)dealloc;
- (void)removeItem:(id)a0;
- (BOOL)containsItem:(id)a0;
- (unsigned long long)count;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_stateCapture;

@end
