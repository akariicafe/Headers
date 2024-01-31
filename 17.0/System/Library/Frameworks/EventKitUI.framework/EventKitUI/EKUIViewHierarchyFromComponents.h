@class UIColor, NSString;
@protocol EKUIViewHierarchy;

@interface EKUIViewHierarchyFromComponents : NSObject <EKUIViewHierarchy, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } ekui_size;
@property (nonatomic) double ekui_width;
@property (nonatomic) double ekui_height;
@property (retain, nonatomic) id<EKUIViewHierarchy> ekui_rootViewHierarchy;
@property (nonatomic) long long ekui_horizontalSizeClass;
@property (nonatomic) long long ekui_verticalSizeClass;
@property (nonatomic) long long ekui_interfaceOrientation;
@property (retain, nonatomic) UIColor *ekui_tintColor;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } ekui_affineTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
