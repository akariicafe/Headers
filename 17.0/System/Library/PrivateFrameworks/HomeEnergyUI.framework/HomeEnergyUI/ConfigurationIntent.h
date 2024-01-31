@class NSString;

@interface ConfigurationIntent : INIntent

@property (nonatomic, copy) NSString *homeIdentifier;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
