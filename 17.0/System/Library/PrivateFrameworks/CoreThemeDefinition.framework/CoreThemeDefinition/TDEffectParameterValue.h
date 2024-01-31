@class NSNumber, TDEffectParameterType, TDEffectComponent;

@interface TDEffectParameterValue : NSManagedObject

@property (retain, nonatomic) NSNumber *intValue;
@property (retain, nonatomic) NSNumber *floatValue;
@property (retain, nonatomic) NSNumber *colorValue;
@property (retain, nonatomic) NSNumber *angleValue;
@property (retain, nonatomic) TDEffectParameterType *parameterType;
@property (retain, nonatomic) TDEffectComponent *component;
@property (nonatomic) unsigned long long redComponent;
@property (nonatomic) unsigned long long greenComponent;
@property (nonatomic) unsigned long long blueComponent;

+ (id)keyPathsForValuesAffectingColor;
+ (id)keyPathsForValuesAffectingBlueComponent;
+ (id)keyPathsForValuesAffectingGreenComponent;
+ (id)keyPathsForValuesAffectingRedComponent;

@end
