@interface ICASCollaborationActionType : NSObject <AADataType>

@property (readonly, nonatomic) long long collaborationActionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollaborationActionType:(long long)a0;

@end
