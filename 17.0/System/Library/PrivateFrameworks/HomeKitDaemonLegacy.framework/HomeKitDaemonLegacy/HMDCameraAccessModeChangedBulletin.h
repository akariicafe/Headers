@class NSString, NSDictionary, NSDate;

@interface HMDCameraAccessModeChangedBulletin : HMFObject

@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, getter=isTimeSensitive) BOOL timeSensitive;

+ (id)localizedMessageForCameraAccessModeChange:(unsigned long long)a0 changeReason:(long long)a1 camera:(id)a2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessMode:(unsigned long long)a0 camera:(id)a1 home:(id)a2 changeReason:(long long)a3 changeDate:(id)a4;
- (id)initWithTitle:(id)a0 body:(id)a1 threadIdentifier:(id)a2 dateOfOccurrence:(id)a3 userInfo:(id)a4 isTimeSensitive:(BOOL)a5;

@end
