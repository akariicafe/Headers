@class NSString, UIColor;

@interface PXStoryHUDViewConfiguration : NSObject <PXGViewUserData>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGPoint { double x; double y; } textRelativePosition;
@property (nonatomic) struct CGPoint { double x; double y; } textInsets;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double borderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
