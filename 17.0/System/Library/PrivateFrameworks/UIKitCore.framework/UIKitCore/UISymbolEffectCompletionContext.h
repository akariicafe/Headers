@class NSSymbolEffect, NSSymbolContentTransition;

@interface UISymbolEffectCompletionContext : NSObject

@property (nonatomic, getter=isFinished) BOOL finished;
@property (weak, nonatomic) id sender;
@property (retain, nonatomic) NSSymbolEffect *effect;
@property (retain, nonatomic) NSSymbolContentTransition *contentTransition;

+ (id)_new;

- (id)_init;
- (void).cxx_destruct;

@end
