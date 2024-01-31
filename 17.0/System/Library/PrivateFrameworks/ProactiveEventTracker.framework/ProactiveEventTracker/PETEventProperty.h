@class NSString;

@interface PETEventProperty : NSObject

@property (readonly, nonatomic) unsigned long long cardinality;
@property (readonly, nonatomic) NSString *longestValueString;
@property (readonly, nonatomic) NSString *name;

+ (id)propertyWithName:(id)a0 possibleValues:(id)a1;
+ (id)freeValuedPropertyWithName:(id)a0;
+ (id)propertyWithName:(id)a0 enumMapping:(id)a1;
+ (id)propertyWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;
+ (id)propertyWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(BOOL)a2;
+ (id)propertyWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)propertyWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 clampValues:(BOOL)a2;
+ (id)propertyWithName:(id)a0 rangeMin:(unsigned long long)a1 rangeMax:(unsigned long long)a2;

- (id)initWithName:(id)a0;
- (id)possibleValues;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (void).cxx_destruct;
- (BOOL)isValidValue:(id)a0;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;

@end
