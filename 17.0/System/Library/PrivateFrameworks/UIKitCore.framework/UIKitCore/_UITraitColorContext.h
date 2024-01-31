@class NSString;

@interface _UITraitColorContext : NSObject <UINSIntegerTraitDefinition, UITraitDefinitionPrivate>

@property (class, readonly, nonatomic) long long defaultValue;
@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly, nonatomic) BOOL affectsColorAppearance;
@property (class, readonly, nonatomic) BOOL defaultValueRepresentsUnspecified;
@property (class, readonly, nonatomic) BOOL _isPrivate;


@end
