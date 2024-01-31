@class NSString;

@interface UITraitDisplayScale : NSObject <UITraitDefinitionPrivate, UICGFloatTraitDefinition>

@property (class, readonly, nonatomic) BOOL defaultValueRepresentsUnspecified;
@property (class, readonly, nonatomic) BOOL _isPrivate;
@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly, nonatomic) BOOL affectsColorAppearance;
@property (class, readonly, nonatomic) double defaultValue;

@end
