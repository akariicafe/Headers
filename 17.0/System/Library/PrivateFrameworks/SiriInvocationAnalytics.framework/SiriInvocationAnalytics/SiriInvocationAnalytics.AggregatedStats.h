@class NSString;

@interface SiriInvocationAnalytics.AggregatedStats : NSObject {
    void /* unknown type, empty encoding */ modelVersion;
}

@property (nonatomic) void /* unknown type, empty encoding */ triggeredMechanism;
@property (nonatomic) void /* unknown type, empty encoding */ requestCount;
@property (nonatomic) void /* unknown type, empty encoding */ intendedRequestCount;
@property (nonatomic) void /* unknown type, empty encoding */ unintendedRequestCount;
@property (nonatomic) void /* unknown type, empty encoding */ intendedRequestRatio;
@property (nonatomic) void /* unknown type, empty encoding */ triggeredMechanismRequestRatio;
@property (nonatomic, copy) NSString *modelVersion;

- (id)init;
- (void).cxx_destruct;

@end
