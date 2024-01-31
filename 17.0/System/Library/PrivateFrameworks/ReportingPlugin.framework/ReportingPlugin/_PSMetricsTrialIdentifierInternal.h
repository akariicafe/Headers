@class NSString;

@interface _PSMetricsTrialIdentifierInternal : NSObject {
    void /* unknown type, empty encoding */ experiment;
    void /* unknown type, empty encoding */ treatment;
    void /* unknown type, empty encoding */ deployment;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithExperiment:(id)a0 treatment:(id)a1 deployment:(id)a2;

@end
