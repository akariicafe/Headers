@class NSNumber;

@interface CFXActionLogging : NSObject

@property (class, readonly, nonatomic) NSNumber *remainingMemory;

+ (id)CFX_actionLogDictionaryWithEvent:(id)a0 atLocation:(id)a1 withEffectStack:(id)a2;
+ (id)actionLogAsJSONForEvent:(id)a0 atLocation:(id)a1 withEffectStack:(id)a2;
+ (id)actionLogAsStringForEvent:(id)a0 atLocation:(id)a1 withEffectStack:(id)a2;

@end
