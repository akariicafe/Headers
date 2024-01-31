@class NSLocale;

@interface AVCCaptionsConfig : NSObject

@property (retain, nonatomic) NSLocale *locale;

- (void)dealloc;
- (id)description;

@end
