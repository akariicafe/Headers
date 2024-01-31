@class MLModel, MLPredictionOptions, NSString;
@protocol MLFeatureProvider;

@interface MLGenericPredictionRequest : NSObject <MLPredictionRequest> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _used;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancelled;
}

@property (readonly, nonatomic) MLModel *model;
@property (readonly, nonatomic) id<MLFeatureProvider> inputFeatures;
@property (readonly, nonatomic) MLPredictionOptions *predictionOptions;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
