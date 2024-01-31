@class UIImage, NSSymbolContentTransition, NSSymbolEffectOptions;

@interface _UIImageViewPendingSymbolContentTransition : NSObject

@property (readonly, nonatomic) NSSymbolContentTransition *symbolContentTransition;
@property (readonly, nonatomic) NSSymbolEffectOptions *options;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) UIImage *sourceSymbolImage;
@property (readonly, nonatomic) UIImage *targetSymbolImage;

+ (id)transitionWithTransition:(id)a0 sourceSymbolImage:(id)a1 targetSymbolImage:(id)a2 options:(id)a3 completion:(id /* block */)a4;

- (void).cxx_destruct;

@end
