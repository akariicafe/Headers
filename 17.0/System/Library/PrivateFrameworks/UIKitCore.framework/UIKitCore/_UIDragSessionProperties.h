@interface _UIDragSessionProperties : NSObject

@property (nonatomic) BOOL _avoidsKeyboardSuppression;
@property (nonatomic) BOOL _rotatable;
@property (nonatomic) BOOL _resizable;
@property (nonatomic) struct CGSize { double width; double height; } _minimumResizableSize;
@property (nonatomic) struct CGSize { double width; double height; } _maximumResizableSize;
@property (nonatomic) BOOL _wantsElasticEffects;
@property (nonatomic) BOOL _supportsSystemDrag;

- (id)init;

@end
