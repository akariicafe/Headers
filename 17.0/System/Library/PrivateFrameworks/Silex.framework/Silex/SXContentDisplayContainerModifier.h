@class NSString, NSMutableDictionary;

@interface SXContentDisplayContainerModifier : NSObject <SXDOMModifying>

@property (readonly, nonatomic) NSMutableDictionary *containers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
