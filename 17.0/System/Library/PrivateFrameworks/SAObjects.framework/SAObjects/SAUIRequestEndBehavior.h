@class NSNumber, NSString;

@interface SAUIRequestEndBehavior : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *minimumAutoDismissalTimeInMs;
@property (nonatomic) BOOL premptivelyResumeMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;

@end
