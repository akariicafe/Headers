@class NSString;

@interface ATXMicroLocationTrigger : NSObject <ATXTrigger>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
