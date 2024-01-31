@class NSDictionary, JETreatment;

@interface JETreatmentContext : NSObject {
    JETreatment *_treatment;
    NSDictionary *_metrics;
}

- (void).cxx_destruct;
- (id)initWithTreatment:(id)a0 metrics:(id)a1;

@end
