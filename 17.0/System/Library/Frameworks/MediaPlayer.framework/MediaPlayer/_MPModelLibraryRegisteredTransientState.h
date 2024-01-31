@class MPSectionedCollection, NSUUID;

@interface _MPModelLibraryRegisteredTransientState : NSObject

@property (nonatomic) long long addState;
@property (nonatomic) long long keepLocalState;
@property (nonatomic) long long favoriteState;
@property (copy, nonatomic) MPSectionedCollection *modelObjects;
@property (copy, nonatomic) MPSectionedCollection *relatedModelObjects;
@property (copy, nonatomic) NSUUID *token;

- (void).cxx_destruct;

@end
