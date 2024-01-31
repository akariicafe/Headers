@class NSNumber, NSArray;

@interface VGDenylistEntry : NSObject {
    NSNumber *_modelId;
    NSArray *_firmwareIds;
    NSArray *_years;
    NSArray *_models;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithModelId:(id)a0 firmwareIds:(id)a1 years:(id)a2 models:(id)a3;
- (BOOL)isSupersetOfEntry:(id)a0;

@end
