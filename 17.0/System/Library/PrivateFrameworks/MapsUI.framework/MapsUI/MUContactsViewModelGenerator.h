@class CNContact;

@interface MUContactsViewModelGenerator : NSObject {
    CNContact *_contact;
}

+ (id)symbolImageForAddressItem;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)headerLabelFromAddress:(id)a0;
- (id)sectionViewsFromContentViews:(id)a0 headerLabels:(id)a1;
- (id)viewModelForAddress:(id)a0;

@end
