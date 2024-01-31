@class NSString, NSNumber;

@interface ICASCollaboratorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countOfCollaboratorAdded;
@property (readonly, nonatomic) NSNumber *countOfCollaboratorRemoved;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountOfCollaboratorAdded:(id)a0 countOfCollaboratorRemoved:(id)a1;

@end
