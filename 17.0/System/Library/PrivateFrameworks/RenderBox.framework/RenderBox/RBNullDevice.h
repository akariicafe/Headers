@class NSString;

@interface RBNullDevice : NSObject <RBImageRenderer>

@property (class, readonly, nonatomic) RBNullDevice *sharedDevice;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGImage { } *)renderImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 renderer:(id /* block */)a2;
- (void)renderImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 renderer:(id /* block */)a2 completionQueue:(id)a3 handler:(id /* block */)a4;

@end
