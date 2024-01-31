@interface ICASCollaborationAccessReason : NSObject <AADataType>

@property (readonly, nonatomic) long long collaborationAccessReason;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollaborationAccessReason:(long long)a0;

@end
