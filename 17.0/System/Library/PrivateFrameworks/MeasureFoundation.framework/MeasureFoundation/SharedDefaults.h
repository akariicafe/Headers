@class NSString;

@interface SharedDefaults : NSObject

@property (class, readonly, nonatomic) NSString *measureUnits;

@property long long cachedMeasureUnits;

+ (id)defaults;
+ (void)setupSpecifier:(id)a0;
+ (long long)currentMeasureUnits;
+ (id)getDefaultValues;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
