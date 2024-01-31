@class NSString, ICASFolderCreationApproach, NSArray, NSNumber, ICASFilterCondition;

@interface ICASSmartFolderCreationData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASFolderCreationApproach *folderCreationApproach;
@property (readonly, nonatomic) NSNumber *countOfTags;
@property (readonly, nonatomic) ICASFilterCondition *filterCondition;
@property (readonly, nonatomic) NSArray *enabledFiltersArray;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithFolderCreationApproach:(id)a0 countOfTags:(id)a1 filterCondition:(id)a2 enabledFiltersArray:(id)a3;

@end
