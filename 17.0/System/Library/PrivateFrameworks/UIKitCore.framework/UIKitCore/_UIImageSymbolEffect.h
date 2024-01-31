@interface _UIImageSymbolEffect : NSObject <_UIImageSymbolAnimationPreset, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _stateUpdateType;
@property (readonly, nonatomic) long long _desiredScale;
@property (readonly, nonatomic) long long _desiredVisibility;
@property (readonly, nonatomic, getter=_isValidAnimationPreset) BOOL _validAnimationPreset;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)effect;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isSymbolEffect;
- (BOOL)_isSymbolTransition;
- (id)_nsSymbolEffectRepresentation;
- (void)_performCompletionHandler;

@end
