@interface ICASChecklistAction : NSObject <AADataType>

@property (readonly, nonatomic) long long checklistAction;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithChecklistAction:(long long)a0;

@end
