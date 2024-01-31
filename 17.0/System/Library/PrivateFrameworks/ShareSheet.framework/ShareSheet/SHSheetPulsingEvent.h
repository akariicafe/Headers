@class NSUUID, NSString;

@interface SHSheetPulsingEvent : NSObject <BSXPCSecureCoding>

@property (copy, nonatomic) NSUUID *activityUUID;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) BOOL isPulsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)startPulsingEventWithActivityUUID:(id)a0 localizedTitle:(id)a1;
+ (id)stopPulsingEventWithActivityUUID:(id)a0;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
