@class NSString;

@interface HUQuickControlWheelPickerViewItem : NSObject

@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL isSelected;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHFMultiStateControlItemValue:(id)a0 text:(id)a1 isSelected:(BOOL)a2;
- (id)initWithHFTVInputControlItemValue:(id)a0;

@end
