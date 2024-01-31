@class NSUUID, NSString;

@interface SBSABackgroundBlurDescription : NSObject <SBSAInterfaceElementIdentifying, SBSABackgroundBlurDescribing, NSCopying, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (nonatomic, getter=isBlurHidden, setter=_setBlurHidden:) BOOL blurHidden;
@property (nonatomic, setter=_setBlurFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } blurFrame;
@property (readonly, copy, nonatomic) NSUUID *interfaceElementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyBySettingBlurFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyBySettingBlurHidden:(BOOL)a0;

@end
