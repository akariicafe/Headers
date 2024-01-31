@class NSString;

@interface _UITraitRegistration : NSObject <UITraitChangeRegistration> {
    BOOL _targetIsSender;
    id /* block */ _handler;
    id _target;
    SEL _action;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
