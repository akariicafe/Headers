@class UIColor, NTKKeylineTouchable, NSString, UIView;
@protocol NTKKeylineView;

@interface _NTKCompoundKeylineImageView : _NTKKeylineImageView <NTKKeylineView>

@property (retain, nonatomic) UIView<NTKKeylineView> *secondaryKeylineView;
@property (retain, nonatomic) NTKKeylineTouchable *touchable;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keylineWithImage:(id)a0 secondaryKeylineView:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
