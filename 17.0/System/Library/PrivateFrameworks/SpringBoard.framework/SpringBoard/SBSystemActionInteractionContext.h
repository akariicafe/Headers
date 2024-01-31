@class NSString, SBSystemActionSuppressionStatus, NSDate;

@interface SBSystemActionInteractionContext : NSObject <BSDescriptionStreamable, NSCopying> {
    NSDate *_preciseTimestamp;
    unsigned long long _type;
    SBSystemActionSuppressionStatus *_suppressionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
