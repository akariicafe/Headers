@class NSString;

@interface PDFPointerRegionPrivate : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    NSString *identifier;
}

- (void).cxx_destruct;

@end
