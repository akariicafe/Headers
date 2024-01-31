@class NSString;

@interface WFTTSSpokenVariant : NSObject <WFTTSStringAnnotation, WFTTSStringComponent>

@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *spokenString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseAnnotationString:(id)a0;

@end
