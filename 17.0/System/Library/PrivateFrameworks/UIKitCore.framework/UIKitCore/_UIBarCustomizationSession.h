@class NSArray, NSMutableArray;
@protocol _UIBarCustomizerAnimating;

@interface _UIBarCustomizationSession : NSObject

@property (copy, nonatomic) NSArray *sourceItems;
@property (retain, nonatomic, getter=_mutableVisibleItems) NSMutableArray *_mutableVisibleItems;
@property (retain, nonatomic, getter=_mutableAdditionalItems) NSMutableArray *_mutableAdditionalItems;
@property (readonly, nonatomic) NSArray *visibleItems;
@property (readonly, nonatomic) NSArray *additionalItems;
@property (readonly, nonatomic) id<_UIBarCustomizerAnimating> beginAnimationCoordinator;
@property (readonly, nonatomic) id<_UIBarCustomizerAnimating> endAnimationCoordinator;

+ (id)sessionWithVisibleItems:(id)a0 additionalItems:(id)a1;

- (void).cxx_destruct;

@end
