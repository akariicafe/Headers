@class _TtC7CoreODI18ODISessionInternal, NSDate;

@interface ODISession : NSObject

@property (readonly, nonatomic) NSDate *_lastAttributeDate;
@property (readonly, nonatomic) _TtC7CoreODI18ODISessionInternal *_internalSession;

+ (void)_initLogCategories;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithAdditionalAttributes:(id)a0;
- (void)getAssessment:(id /* block */)a0;
- (void)getAssessmentForTransaction:(id /* block */)a0;
- (id)initWithServiceIdentifier:(id)a0 forDSIDType:(unsigned long long)a1 andLocationBundle:(id)a2;
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)a0;
- (id)initForTransaction;
- (id)initWithServiceIdentifier:(id)a0 forDSIDType:(unsigned long long)a1;
- (id)initWithServiceIdentifier:(id)a0 forDSIDType:(unsigned long long)a1 andLocationBundleIdentifier:(id)a2;

@end
