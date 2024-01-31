@class UIColor;

@interface LPImagePresentationProperties : NSObject

@property (nonatomic) long long filter;
@property (nonatomic) long long scalingMode;
@property (nonatomic) BOOL shouldApplyBackground;
@property (nonatomic) BOOL requireFixedSize;
@property (retain, nonatomic) UIColor *maskColor;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) BOOL canAdjustHorizontalPaddingForFixedSize;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;

@end
