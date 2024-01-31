@class NSString, CNContact;
@protocol PXPerson;

@interface PXPeopleNameSelection : NSObject

@property (readonly, nonatomic) unsigned long long selectionType;
@property (readonly, nonatomic) id<PXPerson> person;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;

- (id)initWithContact:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 contact:(id)a1 person:(id)a2 type:(unsigned long long)a3;
- (id)initWithSelectedPerson:(id)a0;
- (void)setLinkedPerson:(id)a0;

@end
