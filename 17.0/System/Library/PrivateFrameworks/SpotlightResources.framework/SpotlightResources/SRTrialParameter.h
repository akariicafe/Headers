@class SRParameter;

@interface SRTrialParameter : NSObject

@property (readonly, nonatomic) SRParameter *parameter;
@property (nonatomic) BOOL hasValueFromTrial;

- (id)description;
- (void).cxx_destruct;
- (id)initWithParameter:(id)a0;

@end
