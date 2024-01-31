@class CNContact, NSAttributedString, PHPerson;

@interface PXPeopleNamePickerItem : NSObject

@property (readonly) PHPerson *person;
@property (readonly) CNContact *contact;
@property (readonly) NSAttributedString *title;
@property (readonly) NSAttributedString *subtitle;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 searchPrefix:(id)a1;
- (id)initWithPerson:(id)a0 searchPrefix:(id)a1;

@end
