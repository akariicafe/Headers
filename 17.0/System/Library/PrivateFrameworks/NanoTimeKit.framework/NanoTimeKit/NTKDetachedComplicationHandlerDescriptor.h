@class NSString, NTKComplication;
@protocol CDTemplateComplicationDisplay;

@interface NTKDetachedComplicationHandlerDescriptor : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long family;
@property (retain, nonatomic) NTKComplication *complication;
@property (weak, nonatomic) id<CDTemplateComplicationDisplay> display;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;

@end
