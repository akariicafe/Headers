@class NSString, TSDBezierPath;

@interface TSDSVGToBezierPathConverter : NSObject <NSXMLParserDelegate> {
    TSDBezierPath *mFileBezierPath;
    NSString *mHiddenOnTag;
    unsigned long long mHiddenOnTagNestedCount;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mGroupedAffineTransform;
    unsigned long long mGroupedAffineTransformNestedCount;
    BOOL mViewBoxFound;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mViewBox;
    BOOL mUsesEvenOdd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGPath { } *)newPathFromSVGPathString:(id)a0;
+ (struct CGPath { } *)newPathFromSVGPathString:(id)a0 shouldClosePathAtEnd:(BOOL)a1;
+ (struct CGPath { } *)newPathFromSVGPolygonString:(id)a0;
+ (struct CGPath { } *)newPathFromSVGPolylineString:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromSVGTransformAttributeString:(id)a0;

@end
