@class NSMutableArray;

@interface TSCH3DCachedLabelBoundsArray : NSObject {
    NSMutableArray *_elements;
}

@property (nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } offset;

- (void)clear;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)addLabelBounds:(id)a0;
- (void)enumerateLabelBoundsUsingBlock:(id /* block */)a0;

@end
