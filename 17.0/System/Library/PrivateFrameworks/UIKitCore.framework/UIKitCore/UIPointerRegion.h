@class NSString, UIView;
@protocol NSObject;

@interface UIPointerRegion : NSObject <_UIContentEffectKey, NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) id<NSObject> identifier;
@property (nonatomic) unsigned long long generationID;
@property (readonly, nonatomic) BOOL _isLatching;
@property (weak, nonatomic) UIView *referenceView;
@property (nonatomic) unsigned long long latchingAxes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
