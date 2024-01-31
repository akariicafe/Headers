@class NSNumber, NSString;

@interface HFAnalyticsFaceRecognitionNamedPersonEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *isNewPerson;
@property (retain, nonatomic) NSNumber *personType;
@property (retain, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSNumber *errorCode;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_namedPersonTypeForPerson:(id)a0;

@end
