@class NSString, NSDictionary;

@interface CSStateCaptureOptionsMutable : NSObject <CSStateCaptureOptionsMutablity>

@property (readonly, nonatomic) NSString *stateDataTitle;
@property (readonly, nonatomic) NSDictionary *stateData;

- (void).cxx_destruct;
- (void)setStateData:(id)a0;
- (void)setStateDataTitle:(id)a0;

@end
