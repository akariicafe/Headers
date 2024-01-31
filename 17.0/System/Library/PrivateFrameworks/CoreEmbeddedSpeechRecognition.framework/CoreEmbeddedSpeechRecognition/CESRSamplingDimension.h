@class NSString;

@interface CESRSamplingDimension : NSObject

@property (readonly, copy, nonatomic) NSString *asrLocale;

- (id)description;
- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (id)initWithAsrLocale:(id)a0;

@end
