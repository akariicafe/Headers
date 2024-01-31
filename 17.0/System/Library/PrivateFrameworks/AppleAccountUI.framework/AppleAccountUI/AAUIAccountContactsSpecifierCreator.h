@interface AAUIAccountContactsSpecifierCreator : NSObject

- (id)createAddTableCellWithTitle:(id)a0 loadAction:(SEL)a1 target:(id)a2;
- (id)createGroupSpecifierWithIdentifier:(id)a0 title:(id)a1 footerText:(id)a2 linkText:(id)a3 actionMethodName:(id)a4 target:(id)a5;
- (id)createSubtitleTableCellWithName:(id)a0 title:(id)a1 subtitle:(id)a2 image:(id)a3;
- (id)createTableCellForContact:(id)a0 loadAction:(SEL)a1 target:(id)a2;
- (id)createTableCellWithName:(id)a0 title:(id)a1 longSubtitle:(id)a2 image:(id)a3;

@end
