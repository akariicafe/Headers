@class NSArray;

@interface JETreatmentProfile : NSObject {
    NSArray *_treatments;
}

+ (id)treatmentProfileWithConfiguration:(id)a0;
+ (id)treatmentProfileWithConfiguration:(id)a0 topic:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0 topic:(id)a1;
- (id)performTreatments:(id)a0;

@end
