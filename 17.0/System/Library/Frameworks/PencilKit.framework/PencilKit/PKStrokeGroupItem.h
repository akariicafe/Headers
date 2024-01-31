@class NSArray, CHStrokeGroupQueryItem;

@interface PKStrokeGroupItem : NSObject {
    CHStrokeGroupQueryItem *_strokeGroupItem;
    NSArray *_strokes;
    long long _contentType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

- (void).cxx_destruct;

@end
