@class NSString, NSNumber, NSArray;
@protocol WFPropertyListObject;

@interface WFContentPropertyBuilder : NSObject

@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ setterBlock;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) Class propertyClass;
@property (copy, nonatomic) NSNumber *multipleValues;
@property (copy, nonatomic) NSNumber *filterable;
@property (copy, nonatomic) NSNumber *sortable;
@property (copy, nonatomic) NSNumber *gettable;
@property (copy, nonatomic) NSNumber *settable;
@property (copy, nonatomic) NSNumber *appendable;
@property (copy, nonatomic) NSNumber *removable;
@property (copy, nonatomic) NSNumber *primary;
@property (copy, nonatomic) NSArray *allowedOperators;
@property (copy, nonatomic) id<WFPropertyListObject> userInfo;
@property (copy, nonatomic) NSArray *possibleValues;
@property (copy, nonatomic) id /* block */ possibleValuesGetter;
@property (copy, nonatomic) NSNumber *caseInsensitive;
@property (copy, nonatomic) NSString *negativeName;
@property (copy, nonatomic) NSString *singularItemName;
@property (nonatomic, getter=isIrrational) BOOL irrational;
@property (copy, nonatomic) NSNumber *tense;
@property (copy, nonatomic) NSNumber *timeUnits;
@property (copy, nonatomic) NSNumber *comparableUnits;
@property (copy, nonatomic) NSString *measurementUnitType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSNumber *canLowercaseName;

+ (id)block:(id /* block */)a0 name:(id)a1 class:(Class)a2;
+ (id)keyPath:(id)a0 name:(id)a1 class:(Class)a2;
+ (id)keyPath:(id)a0 setterBlock:(id /* block */)a1 name:(id)a2 class:(Class)a3;
+ (id)block:(id /* block */)a0 setterBlock:(id /* block */)a1 name:(id)a2 class:(Class)a3;

- (id)build;
- (void).cxx_destruct;
- (id)displayName:(id)a0;
- (id)multipleValues:(BOOL)a0;
- (id)allowedOperators:(id)a0;
- (id)comparableUnits:(unsigned long long)a0;
- (id)filterable:(BOOL)a0;
- (id)measurementUnitType:(id)a0;
- (id)negativeName:(id)a0;
- (id)possibleValuesGetter:(id /* block */)a0;
- (id)sortable:(BOOL)a0;
- (id)tense:(unsigned long long)a0;
- (id)timeUnits:(unsigned long long)a0;
- (id)userInfo:(id)a0;
- (id)possibleValues:(id)a0;
- (id)appendable:(BOOL)a0;
- (id)canLowercaseName:(BOOL)a0;
- (id)caseInsensitive:(BOOL)a0;
- (id)gettable:(BOOL)a0;
- (id)irrational:(BOOL)a0;
- (id)primary:(BOOL)a0;
- (id)removable:(BOOL)a0;
- (id)setterBlock:(id /* block */)a0;
- (id)singularItemName:(id)a0;

@end
