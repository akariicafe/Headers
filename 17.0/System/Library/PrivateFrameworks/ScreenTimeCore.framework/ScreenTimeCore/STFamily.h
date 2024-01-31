@class NSString, NSArray, STFamilyMember;

@interface STFamily : NSObject <NSCopying>

@property (copy, nonatomic) NSString *dataSource;
@property (copy, nonatomic) NSArray *members;
@property (retain, nonatomic) STFamilyMember *me;

- (id)initWithMembers:(id)a0;
- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
