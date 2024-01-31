@class NSNumber;

@interface PUPickerAdditionalSelectionState : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ observable;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ registerConfiguration;
@property (nonatomic) long long userEncodingPolicy;
@property (nonatomic) BOOL shouldIncludeLocation;
@property (nonatomic) BOOL shouldIncludeCaption;
@property (nonatomic, retain) NSNumber *downscalingTargetDimension;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
