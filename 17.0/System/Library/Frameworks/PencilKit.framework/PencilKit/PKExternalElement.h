@interface PKExternalElement : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBox;
}

@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) struct CGPath { } *path;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;

- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 path:(struct CGPath { } *)a1;

@end
