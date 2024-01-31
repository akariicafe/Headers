@interface ICASCollaborationItemType : NSObject <AADataType>

@property (readonly, nonatomic) long long collaborationItemType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollaborationItemType:(long long)a0;

@end
