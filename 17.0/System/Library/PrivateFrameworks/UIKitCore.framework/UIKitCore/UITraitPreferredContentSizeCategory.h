@class NSString;
@protocol NSObject;

@interface UITraitPreferredContentSizeCategory : NSObject <UITraitDefinitionPrivate, UIObjectTraitDefinition>

@property (class, readonly, nonatomic) BOOL defaultValueRepresentsUnspecified;
@property (class, readonly, nonatomic) BOOL _isPrivate;
@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly, nonatomic) BOOL affectsColorAppearance;
@property (class, readonly, nonatomic) id<NSObject> defaultValue;

@end
