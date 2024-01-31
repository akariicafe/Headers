@class WFToggleFocusModeContextualActionFocusMode, WFContextualActionCalendarEventDescriptor;

@interface WFToggleFocusModeContextualAction : WFContextualAction

@property (readonly, nonatomic) WFToggleFocusModeContextualActionFocusMode *focusMode;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) WFContextualActionCalendarEventDescriptor *eventDescriptor;

+ (id)spotlightDomainIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)toggle:(id)a0;
+ (id)turnOn:(id)a0;
+ (id)turnOff:(id)a0;
+ (id)turnOn:(id)a0 untilEventEnds:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFocusMode:(id)a0 operation:(unsigned long long)a1 event:(id)a2;
- (id)settingBiomeStreamIdentifier;

@end
