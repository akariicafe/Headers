@class _UIFocusGroupMap;

@interface _UIDynamicFocusGroupMap : NSObject {
    _UIFocusGroupMap *_impl;
}

- (id)init;
- (id)initWithCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (id)focusGroupIdentifierForItem:(id)a0;
- (id)initWithBackingFocusGroupMap:(id)a0;

@end
