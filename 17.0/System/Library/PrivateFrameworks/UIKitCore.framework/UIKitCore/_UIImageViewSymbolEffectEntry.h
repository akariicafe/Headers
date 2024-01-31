@class NSSymbolEffect, NSSymbolEffectOptions;

@interface _UIImageViewSymbolEffectEntry : NSObject

@property (retain, nonatomic) NSSymbolEffect *symbolEffect;
@property (retain, nonatomic) NSSymbolEffectOptions *options;
@property (nonatomic) BOOL animated;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
