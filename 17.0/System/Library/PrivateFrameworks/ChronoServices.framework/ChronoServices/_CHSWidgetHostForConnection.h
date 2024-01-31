@class NSString, CHSWidgetConfiguration;

@interface _CHSWidgetHostForConnection : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) CHSWidgetConfiguration *configuration;
@property (readonly, nonatomic) unsigned long long activationState;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 activationState:(unsigned long long)a2;

@end
