@class NSString;

@interface NCNotificationSectionMuteAssertion : NSObject <NCNotificationMuteAssertion>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionMuteAssertion;

- (id)_init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)activeMuteAssertionLevelForThreadIdentifier:(id)a0;

@end
