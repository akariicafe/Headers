@class NSString;

@interface PXPeopleDataSourceSection : NSObject

@property (readonly, nonatomic) unsigned long long personFetchType;
@property (getter=isDisclosed) BOOL disclosed;
@property (copy, nonatomic) NSString *disclosedTitle;
@property (copy, nonatomic) NSString *unDisclosedTitle;

- (void).cxx_destruct;
- (id)initWithPersonFetchType:(unsigned long long)a0;

@end
