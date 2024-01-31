@class HDProfile;

@interface HKHRCardioFitnessDefaultIsAgePresentProvider : NSObject <HKHRCardioFitnessIsAgePresentProvider> {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)isAgePresentWithError:(id *)a0;

@end
