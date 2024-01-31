@class NSDictionary, NSString;

@interface _MPUHTMLDefaultDelegate : NSObject <MPUHTMLParserDelegate>

@property (retain, nonatomic) NSDictionary *defaultAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
