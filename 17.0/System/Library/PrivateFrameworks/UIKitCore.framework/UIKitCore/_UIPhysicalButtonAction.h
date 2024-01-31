@class NSString;

@interface _UIPhysicalButtonAction : NSObject <BSDebugDescriptionProviding> {
    unsigned long long _button;
    unsigned long long _state;
    unsigned long long _behavior;
    long long _driverSource;
    double _timestamp;
}

@property (readonly, nonatomic) unsigned long long _button;
@property (readonly, nonatomic) unsigned long long _state;
@property (readonly, nonatomic) unsigned long long _behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
