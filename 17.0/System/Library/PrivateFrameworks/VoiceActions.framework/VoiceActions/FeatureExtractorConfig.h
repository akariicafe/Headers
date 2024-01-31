@class NSString;

@interface FeatureExtractorConfig : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ cmvnSlidingWindowLength;
@property (nonatomic) void /* unknown type, empty encoding */ cmvnMinWindowLength;
@property (nonatomic) void /* unknown type, empty encoding */ spliceLeftContext;
@property (nonatomic) void /* unknown type, empty encoding */ spliceRightContext;
@property (nonatomic) void /* unknown type, empty encoding */ downSampleStride;
@property (nonatomic) void /* unknown type, empty encoding */ nnetIntakeFeatureLength;
@property (nonatomic) void /* unknown type, empty encoding */ nnetVectorSize;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
