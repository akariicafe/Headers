@class NSString;

@interface SiriLinkFlowIntent : INIntent

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *actionIdentifier;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
