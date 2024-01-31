@class NSString, NSArray, UIImage, NSNumber, NSAttributedString;

@interface CRCameraReaderOutputInternal : NSObject {
    NSAttributedString *overlayString;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
    float rotation;
}

@property (retain) NSString *type;
@property (retain) NSArray *vertices;
@property (retain) NSString *stringValue;
@property (retain) NSString *formattedStringValue;
@property (retain) NSNumber *yearValue;
@property (retain) NSNumber *monthValue;
@property (retain) NSNumber *dayValue;
@property (retain) UIImage *imageValue;
@property (retain) NSAttributedString *overlayString;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property float rotation;
@property (retain) NSArray *targetVertices;
@property (retain) NSString *capturePath;

- (void).cxx_destruct;

@end
