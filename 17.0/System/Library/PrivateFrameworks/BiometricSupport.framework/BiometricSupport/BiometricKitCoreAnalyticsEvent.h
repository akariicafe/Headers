@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface BiometricKitCoreAnalyticsEvent : NSObject {
    NSString *_eventName;
    NSArray *_privateProperties;
    NSDictionary *_boundedFieldLimits;
}

@property (retain, nonatomic) NSNumber *eventCanceled;
@property (retain, nonatomic) NSNumber *displayOn;
@property (retain, nonatomic) NSNumber *deviceEnclosureColor;
@property (retain, nonatomic) NSNumber *timeSinceLastEnrollment;
@property (retain, nonatomic) NSNumber *timeSinceLastEnrollmentBinned;
@property (retain, nonatomic) NSNumber *timeSinceLastEvent;
@property (retain, nonatomic) NSDate *previousEventDate;

- (id)valueForUndefinedKey:(id)a0;
- (void)incrementCountField:(id)a0;
- (void)reset;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)getEventDictionary;
- (void)logAnalyticsDictionary:(id)a0;
- (void)setNilValueForKey:(id)a0;
- (void)resetClass:(Class)a0;
- (id)initWithName:(id)a0;
- (id)dictionaryRepresentationForClass:(Class)a0;
- (id)initWithPersistedDataWithName:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (void)updateBoundedFieldValue;
- (void)persistData;
- (BOOL)postEvent;

@end
