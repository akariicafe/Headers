@class NSArray;

@interface MTTreatmentProfile : NSObject

@property (retain, nonatomic) NSArray *treatments;

+ (id)treatmentProfileWithConfigData:(id)a0;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)performTreatments:(id)a0;

@end
