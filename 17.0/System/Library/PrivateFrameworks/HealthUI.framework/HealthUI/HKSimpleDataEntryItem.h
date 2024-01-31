@class NSString;
@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;

@interface HKSimpleDataEntryItem : NSObject

@property (weak, nonatomic) id<HKSimpleDataEntryItemDelegate> delegate;
@property (weak, nonatomic) id<HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate;
@property (nonatomic) unsigned long long placeholderType;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

- (void)localeDidChange:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (id)cell;
- (id)accessoryToolbar;
- (id)formattedKeyAndValue;
- (void)toolbarDoneButtonPressed:(id)a0;
- (void)toolbarNextButtonPressed:(id)a0;
- (void)toolbarPrevButtonPressed:(id)a0;
- (void)updateCellDisplay;

@end
