@class NSString;

@interface UITraitPrimaryInteractionModel : NSObject <UITraitDefinitionPrivate, UINSUIntegerTraitDefinition>

@property (class, readonly, nonatomic) BOOL defaultValueRepresentsUnspecified;
@property (class, readonly, nonatomic) BOOL _isPrivate;
@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly, nonatomic) BOOL affectsColorAppearance;
@property (class, readonly, nonatomic) unsigned long long defaultValue;

@end
