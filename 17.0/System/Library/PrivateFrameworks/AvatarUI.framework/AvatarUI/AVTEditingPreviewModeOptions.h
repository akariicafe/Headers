@class NSString;

@interface AVTEditingPreviewModeOptions : NSObject

@property (readonly, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) NSString *bodyPosePack;

+ (id)defaultOptions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFramingMode:(id)a0 bodyPosePack:(id)a1;

@end
