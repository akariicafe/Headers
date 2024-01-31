@class RBDisplayList;

@interface RBDrawableItem : NSObject {
    struct objc_ptr<RBDisplayList *> { RBDisplayList *_p; } _list;
}

@property (retain, nonatomic) RBDisplayList *displayList;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } sourceRect;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } destinationOffset;
@property (nonatomic) int initialState;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
