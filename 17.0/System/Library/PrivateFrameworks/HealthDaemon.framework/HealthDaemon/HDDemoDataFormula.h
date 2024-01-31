@interface HDDemoDataFormula : NSObject

+ (double)computeBasalMetabolicRateFromWeight:(double)a0 height:(double)a1 age:(double)a2 sex:(long long)a3;
+ (double)computeBloodAlcoholContentForNumDrinks:(double)a0 elapsedTime:(double)a1 weight:(double)a2 sex:(long long)a3;
+ (double)computeBodyFatPercentageFromWeight:(double)a0 leanBodyMass:(double)a1;
+ (double)computeBodyMassIndexFromWeight:(double)a0 height:(double)a1;
+ (double)computeLeanBodyMassFromWeight:(double)a0 height:(double)a1 sex:(long long)a2 waistCircumference:(double)a3 forearmCircumference:(double)a4 wristCircumference:(double)a5 hipCircumference:(double)a6;
+ (double)convertDegreeCelsiusToFahrenheit:(double)a0;
+ (double)convertDegreeFahrenheitToCelsius:(double)a0;

@end
