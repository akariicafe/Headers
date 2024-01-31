@class NSString, NSArray;
@protocol PETLoggingOutlet;

@interface PETEventTracker : NSObject

@property (readonly, nonatomic) BOOL testingMode;
@property (readonly, nonatomic) id<PETLoggingOutlet> loggingOutlet;
@property (readonly, nonatomic) NSString *featureId;
@property (readonly, nonatomic) NSArray *registeredProperties;
@property (readonly, nonatomic) NSArray *propertySubsets;

- (id)getValueForKey:(id)a0;
- (id)_stringifiedPropertiesForEvent:(id)a0 propertyValueArray:(id)a1;
- (BOOL)_validatePropertyValues:(id)a0;
- (void)disableTestingMode;
- (void)_checkPropertySubsets:(id)a0;
- (void)_setValue:(id)a0 forEvent:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
- (void)_trackEvent:(id)a0 withPropertyValues:(id)a1 value:(id)a2 overwrite:(BOOL)a3;
- (void)enableTestingMode;
- (void)_logValue:(id)a0 forEvent:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
- (void)_trackEvent:(id)a0 withPropertyValues:(id)a1 value:(id)a2;
- (id)_keyMetadataForEvent:(id)a0;
- (void).cxx_destruct;
- (id)getKeyValueDict;
- (void)_checkCardinalityForEvent:(id)a0;
- (id)_defaultLoggingOutlet;
- (id)initWithFeatureId:(id)a0 registerProperties:(id)a1 propertySubsets:(id)a2;
- (void)_checkKeyLengthForEvent:(id)a0 metaData:(id)a1;
- (void)_checkInTestingMode;
- (void)_setLoggingOutlet:(id)a0;

@end
