@interface DRSPopulationPingMessage : DRSTaskingSystemMessage

+ (id)messageType;

- (id)init;
- (BOOL)_versionIsSupported:(id)a0;
- (id)initWithJSONDict:(id)a0;

@end
