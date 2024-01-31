@class NSString;
@protocol NSObject;

@interface SFTraitBackgroundBlurEffect : NSObject <UIObjectTraitDefinition>

@property (class, readonly, nonatomic) id<NSObject> defaultValue;
@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly, nonatomic) BOOL affectsColorAppearance;


@end
